#pragma once
#include <cstdint>
#include <MinHook.h>
#include <windows.h>
#include <unordered_map>
#include <string>

/*constexpr uintptr_t BASE = 0;

template<typename T>
constexpr T RVA(uintptr_t rva)
{
    return reinterpret_cast<T>(
        reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + rva);
}*/

// This needs to be AFTER the RVA def
#include "primordialis_data/data_types.h"
//#include "primordialis_data/data_labels.h"
#include <tlhelp32.h>
//#include "primordialis_data/function_declarations.h"

#include <vector>

extern"C" __declspec(dllexport) bool READY = false;

HMODULE api_dll;

void(*GetFunctionAddressRaw)(uintptr_t&, const char*) = nullptr;
void(*UpdateFunctionAddressRaw)(uintptr_t, const char*) = nullptr;
void(*GetDataAddressRaw)(uintptr_t&, const char*) = nullptr;
void(*UpdateDataAddressRaw)(uintptr_t, const char*) = nullptr;

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

struct APIUtil
{
    inline static APIUtil* instance = nullptr;

    struct AddCellCallSimple
    {
        int copyFrom = 1;
        void (*physics_update_fn)(struct cell*) = nullptr;
        void (*force_update_fn)(struct cell*) = nullptr;
        void (*electric_update_fn)(struct cell*) = nullptr;
        void (*connection_update_fn)(struct cell*) = nullptr;
        void (*brain_fn)(struct cell*) = nullptr;
        void (*destroyed_fn)(struct cell*) = nullptr;

        real_4_u_0_s_0 color = {0.f, 0.f, 0.f, 1.f};
    };
    struct AddCellCall
    {
        bool is_simple = true;

        union context {
            AddCellCallSimple simple;
            material_t extensive;
        };

        context cell;
    };

    std::vector<AddCellCall> cells2add;

    // store commonly used stuff here
    void(*init_materials_list)() = nullptr;
    ulong* tls_index = nullptr;
    int* n_materials;
    material_t** materials_list;

    APIUtil() {};
    
    void InitCommon()
    {
        GetDataAddressRaw(reinterpret_cast<uintptr_t&>(tls_index), "tls_index");
        GetDataAddressRaw(reinterpret_cast<uintptr_t&>(n_materials), "n_materials");
        GetDataAddressRaw(reinterpret_cast<uintptr_t&>(materials_list), "materials_list");
    }

    static void CreateUtilInstance()
    {
        instance = new APIUtil; // dont need to worry about memory cleanup, only needs to be destroyed when primordialis closes, which deletes it anyway
        instance->InitCommon();
    }

    static void QueueAddCell(const AddCellCall& addcell)
    {
        instance->cells2add.push_back(addcell);
    }

    static void AddCell(
        real_4_u_0_s_0 color,
        int copyFrom = 1,
        void (*physics_update_fn)(struct cell*) = nullptr,
        void (*force_update_fn)(struct cell*) = nullptr,
        void (*electric_update_fn)(struct cell*) = nullptr,
        void (*connection_update_fn)(struct cell*) = nullptr,
        void (*brain_fn)(struct cell*) = nullptr,
        void (*destroyed_fn)(struct cell*) = nullptr
    )
    {
        if (*instance->n_materials >= 2048)
        {
            printf("Cell count is at maximum !\n");
            return;
        }

        (*instance->materials_list)[*instance->n_materials] = (*instance->materials_list)[copyFrom];
        (*instance->materials_list)[*instance->n_materials].base_cost = float(*instance->n_materials);
        (*instance->materials_list)[*instance->n_materials].movement_force = 0.5f;
        (*instance->materials_list)[*instance->n_materials].base_color = real_4(real_4_u_0(color));

        (*instance->materials_list)[*instance->n_materials].physics_update_fn = physics_update_fn;
        (*instance->materials_list)[*instance->n_materials].force_update_fn = force_update_fn;
        (*instance->materials_list)[*instance->n_materials].electric_update_fn = electric_update_fn;
        (*instance->materials_list)[*instance->n_materials].connection_update_fn = connection_update_fn;
        (*instance->materials_list)[*instance->n_materials].brain_fn = brain_fn;
        (*instance->materials_list)[*instance->n_materials].destroyed_fn = destroyed_fn;

        *instance->n_materials = *instance->n_materials + 1;

        // automatically make a new hook

        return;
    }

    void AddAllCells()
    {
        init_materials_list();
        int* threadsafe = reinterpret_cast<int*>(TlsGetValue(*tls_index));
        if (*threadsafe == 0)
        {
            for (int i = 0; i < cells2add.size(); i++)
            {
                if (cells2add[i].is_simple)
                {
                    APIUtil::AddCell(
                        cells2add[i].cell.simple.color,
                        cells2add[i].cell.simple.copyFrom,
                        cells2add[i].cell.simple.physics_update_fn,
                        cells2add[i].cell.simple.force_update_fn,
                        cells2add[i].cell.simple.connection_update_fn,
                        cells2add[i].cell.simple.brain_fn,
                        cells2add[i].cell.simple.destroyed_fn
                    );
                }
                else
                {
                    if (*instance->n_materials >= 2048)
                    {
                        printf("Cell count is at maximum !\n");
                        return;
                    }

                    *materials_list[*n_materials] = cells2add[i].cell.extensive;
                    *n_materials += 1;
                }
            }
        }
    }

    static void AddAllCellsHook()
    {
        instance->AddAllCells();
    }

    static void APIHookAllUtil()
    {
        printf("hooking all yoooo\n");
        Hook("init_materials_list", AddAllCellsHook, instance->init_materials_list);
    };


};

void main();

DWORD WINAPI MainThread(LPVOID)
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    //printf("Hello from the injected DLL!\n");

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

    //printf("Found API\n");

    GetFunctionAddressRaw = reinterpret_cast<void(*)(uintptr_t&, const char*)>(GetProcAddress(api_dll, "GetFunctionAddress"));
    UpdateFunctionAddressRaw = reinterpret_cast<void(*)(uintptr_t, const char*)>(GetProcAddress(api_dll, "UpdateFunctionAddress"));
    GetDataAddressRaw = reinterpret_cast<void(*)(uintptr_t&, const char*)>(GetProcAddress(api_dll, "GetDataAddress"));
    UpdateDataAddressRaw = reinterpret_cast<void(*)(uintptr_t, const char*)>(GetProcAddress(api_dll, "UpdateDataAddress"));

    if (!GetFunctionAddressRaw || !UpdateFunctionAddressRaw)
    {
        printf("Missing Func Utility\n");
        return 0;
    }

    //printf("Found API Func Utility\n");

    main();

    APIUtil::APIHookAllUtil();

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