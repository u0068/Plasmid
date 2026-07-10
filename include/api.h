#pragma once
#include <cstdint>
#include <MinHook.h>
#include <windows.h>
#include <unordered_map>
#include <string>

constexpr uintptr_t BASE = 0;

template<typename T>
constexpr T RVA(uintptr_t rva)
{
    return reinterpret_cast<T>(
        reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + rva);
}

// This needs to be AFTER the RVA def
#include "primordialis_data/data_types.h"
#include "primordialis_data/data_labels.h"
#include <tlhelp32.h>
//#include "primordialis_data/function_declarations.h"

extern"C" __declspec(dllexport) bool READY = false;

HMODULE api_dll;

void(*GetFunctionAddressRaw)(uintptr_t&, const char*) = nullptr;
void(*UpdateFunctionAddressRaw)(uintptr_t, const char*) = nullptr;

SYNCHRONIZATION_BARRIER gBarrier;

template<typename T>
void GetFunctionAddress(T& target, std::string name)
{
    GetFunctionAddressRaw(reinterpret_cast<uintptr_t&>(target), name.c_str());
}

template<typename T>
bool Hook(T& original, T hook)
{
    void* target = reinterpret_cast<void*>(original);

    auto status = MH_CreateHook(
        target,
        reinterpret_cast<void*>(hook),
        reinterpret_cast<void**>(&original));

    if (status != MH_OK)
    {
        printf("MH_CreateHook failed: %d\n", status);
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK)
    {
        printf("MH_EnableHook failed: %d\n", status);
        return false;
    }

    return true;
}

template<typename T>
bool Hook(const char* target_name, T hook, T& original)
{
    GetFunctionAddress(original, target_name);
    void* target = reinterpret_cast<void*>(original);

    auto status = MH_CreateHook(
        target,
        reinterpret_cast<void*>(hook),
        reinterpret_cast<void**>(&original));

    if (status != MH_OK)
    {
        printf("MH_CreateHook failed: %d\n", status);
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK)
    {
        printf("MH_EnableHook failed: %d\n", status);
        return false;
    }

    UpdateFunctionAddressRaw(reinterpret_cast<uintptr_t>(original), target_name);

    return true;
}

void main();

DWORD WINAPI MainThread(LPVOID)
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    printf("Hello from the injected DLL!\n");

    if (MH_Initialize() != MH_OK)
    {
        printf("MinHook init failed\n");
        return 0;
    }
    printf("MinHook initialized\n");

    api_dll = GetModuleHandleW(L"plasmid_api.dll"); // assume api is loaded first
    
    if (!api_dll)
    {
        printf("No API loaded\n");
        return 0;
    }

    printf("Found API\n");

    GetFunctionAddressRaw = reinterpret_cast<void(*)(uintptr_t&, const char*)>(GetProcAddress(api_dll, "GetFunctionAddress"));
    UpdateFunctionAddressRaw = reinterpret_cast<void(*)(uintptr_t, const char*)>(GetProcAddress(api_dll, "UpdateFunctionAddress"));

    if (!GetFunctionAddressRaw || !UpdateFunctionAddressRaw)
    {
        printf("Missing Func Utility\n");
        return 0;
    }

    printf("Found API Func Utility\n");

    main();

    READY = true;

    while (true)
    {
        Sleep(1000);
    }

    return 0;
}

BOOL APIENTRY DllMain(
    HMODULE module,
    DWORD reason,
    LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(module);

        CreateThread(
            nullptr,
            0,
            MainThread,
            nullptr,
            0,
            nullptr);
    }

    return TRUE;
}