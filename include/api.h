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
//#include "primordialis_data/function_declarations.h"

extern"C" __declspec(dllexport) bool READY = false;

HMODULE api_dll;

std::unordered_map<std::string, uintptr_t>* function_decls = nullptr;

template<typename T>
void GetFunctionAddress(T& target, std::string func_name)
{
    target = reinterpret_cast<T>(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + function_decls->at(func_name));
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

    api_dll = GetModuleHandleA("plasmid_api.dll"); // assume api is loaded first
    
    if (api_dll == nullptr)
    {
        printf("No API loaded\n");
        return 0;
    }

    function_decls = reinterpret_cast<std::unordered_map<std::string, uintptr_t>*>((uintptr_t)GetProcAddress(api_dll, "FUNC_DECLS"));

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