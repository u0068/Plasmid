#pragma once
#include <cstdint>
#include <MinHook.h>
#include <windows.h>
#include <string>
#include <unordered_map>
#include "primordialis_data/data_types.h"
#include <tlhelp32.h>
#include <vector>

#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

extern"C" __declspec(dllexport) bool READY = false;

template<typename T>
bool Hook(T& original, T hook)
{
    printf("Attempting Hooking.\n");

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

    printf("Hooking successful!\n");

    return true;
}

uintptr_t ResolveSymbol(const char* name)
{
    static bool initialized = false;

    if (!initialized)
    {
        SymSetOptions(
            SYMOPT_UNDNAME |
            SYMOPT_DEFERRED_LOADS
        );

        if (!SymInitialize(GetCurrentProcess(), nullptr, TRUE))
        {
            printf("SymInitialize failed: %lu\n", GetLastError());
            return 0;
        }

        initialized = true;
    }

    char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
    memset(buffer, 0, sizeof(buffer));

    auto* symbol = reinterpret_cast<SYMBOL_INFO*>(buffer);

    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = MAX_SYM_NAME;

    if (!SymFromName(GetCurrentProcess(), name, symbol))
    {
        printf(
            "Failed to resolve symbol '%s': %lu\n",
            name,
            GetLastError()
        );
        return 0;
    }

    return static_cast<uintptr_t>(symbol->Address);
}

template<typename T>
T Resolve(const char* name)
{
    static std::unordered_map<std::string, uintptr_t> cache;

    auto it = cache.find(name);
    if (it != cache.end())
        return reinterpret_cast<T>(it->second);

    uintptr_t addr = ResolveSymbol(name);
    cache[name] = addr;

    return reinterpret_cast<T>(addr);
}

static struct APIUtil
{
    static APIUtil* instance;

    enum InitMatAddType
    {
        complex = 0,
        simple = 1,
        function = 2
    };

    struct AddCellCallSimple
    {
        int copyFrom = 1;
        void (*physics_update_fn)(struct cell*) = nullptr;
        void (*force_update_fn)(struct cell*) = nullptr;
        void (*electric_update_fn)(struct cell*) = nullptr;
        void (*connection_update_fn)(struct cell*) = nullptr;
        void (*brain_fn)(struct cell*) = nullptr;
        void (*destroyed_fn)(struct cell*) = nullptr;
        real_4_u_0_s_0 color = { 0.f, 0.f, 0.f, 1.f };
    };

    struct AddCellCallEx
    {
        uint copyFrom;
        void(*overwrite)(material_t*);
        uint newId;
    };

    struct CellFunctionOverwrite
    {
        void (*physics_update_fn)(struct cell*) = nullptr;
        void (*force_update_fn)(struct cell*) = nullptr;
        void (*electric_update_fn)(struct cell*) = nullptr;
        void (*connection_update_fn)(struct cell*) = nullptr;
        void (*brain_fn)(struct cell*) = nullptr;
        void (*destroyed_fn)(struct cell*) = nullptr;
        uint idx = 0;
    };

    struct AddCellCall
    {
        APIUtil::InitMatAddType type = APIUtil::InitMatAddType::simple;

        union context {
            AddCellCallSimple simple;
            AddCellCallEx extensive;
            CellFunctionOverwrite function;
        };

        context cell;
    };

    struct UpdateWorkCall
    {
        char* traceName = const_cast<char*>("no trace name");
        void(*call)();
    };

    std::vector<AddCellCall> cells2add;
    std::vector<UpdateWorkCall> update_cells_work_append;

    // common fn
    uint(*str_to_id)(char*) = nullptr;
    void* (*begin_trace_stage)(char* name) = nullptr;

    // common v
    world* w;
    ulong* tls_index = nullptr;
    int* n_materials;
    material_t** materials_list;
    real_2* hex_rots;

    // hook targets
    void(*init_materials_list)() = nullptr;// NOTE: only call AFTER APIHookUtil has been called
    void (*update_cells)(render_context*, render_context*, user_input*) = nullptr;// NOTE: only call AFTER APIHookUtil has been called

    APIUtil() {};

    // void InitCommon()
    // {
    //     GetDataAddressRaw(reinterpret_cast<uintptr_t&>(tls_index), "tls_index");
    //     GetDataAddressRaw(reinterpret_cast<uintptr_t&>(n_materials), "n_materials");
    //     GetDataAddressRaw(reinterpret_cast<uintptr_t&>(materials_list), "materials_list");
    //     GetDataAddressRaw(reinterpret_cast<uintptr_t&>(hex_rots), "hex_rots");
    //     GetDataAddressRaw(reinterpret_cast<uintptr_t&>(w), "w");
    //     GetFunctionAddress(str_to_id, "str_to_id");
    //     GetFunctionAddress(begin_trace_stage, "begin_trace_stage");
    // }

    // static void CreateUtilInstance()
    // {
    //     instance = new APIUtil; // dont need to worry about memory cleanup, only needs to be destroyed when primordialis closes, which deletes it anyway
    //     instance->InitCommon();
    // }

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
        (*instance->materials_list)[*instance->n_materials].base_color = real_4{real_4_u_0{color}};

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
                if (cells2add[i].type == APIUtil::InitMatAddType::simple)
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
                else if (cells2add[i].type == APIUtil::InitMatAddType::complex)
                {
                    if (*instance->n_materials >= 2048)
                    {
                        printf("Cell count is at maximum !\n");
                        return;
                    }

                    uint idx = GetCellIdxById(cells2add[i].cell.extensive.copyFrom);
                    if (!idx)
                        continue;

                    (*materials_list)[*n_materials] = (*materials_list)[cells2add[i].cell.extensive.copyFrom];
                    (*materials_list)[*n_materials].id = cells2add[i].cell.extensive.newId;
                    cells2add[i].cell.extensive.overwrite(&((*materials_list)[*n_materials]));
                    *n_materials += 1;
                }
                else
                {
                    /*
                    we have to search for a cell again because vanilla cells will never be loaded at the start of game
                    order of vanilla cells can change per version, if modder wants a faster method can add themselves easily
                    */

                    uint idx = GetCellIdxById(cells2add[i].cell.function.idx);
                    if (!idx)
                        continue;

                    (*instance->materials_list)[idx].physics_update_fn = cells2add[i].cell.function.physics_update_fn;
                    (*instance->materials_list)[idx].force_update_fn = cells2add[i].cell.function.force_update_fn;
                    (*instance->materials_list)[idx].electric_update_fn = cells2add[i].cell.function.electric_update_fn;
                    (*instance->materials_list)[idx].connection_update_fn = cells2add[i].cell.function.connection_update_fn;
                    (*instance->materials_list)[idx].brain_fn = cells2add[i].cell.function.brain_fn;
                    (*instance->materials_list)[idx].destroyed_fn = cells2add[i].cell.function.destroyed_fn;
                }
            }
        }
    }

    void DoAllUpdateCellsWork() // called after vanilla cell-related update functions
    {
        for (int i = 0; i < update_cells_work_append.size(); i++)
        {
            begin_trace_stage(update_cells_work_append[i].traceName);
            update_cells_work_append[i].call();
        }
    }

    static void AddAllCellsHook()
    {
        instance->AddAllCells();
    }
    static void AddAllWorkHook(render_context* param_1, render_context* param_2, user_input* param_3)
    {
        instance->update_cells(param_1, param_2, param_3);
        instance->DoAllUpdateCellsWork();
    }

    // static void APIHookAllUtil()
    // {
    //     Hook("init_materials_list", AddAllCellsHook, instance->init_materials_list);
    //     Hook("init_materials_list", AddAllWorkHook, instance->update_cells);
    // };

    static uint GetCellIdxdByStr(const char* cell)
    {
        uint search = instance->str_to_id(const_cast<char*>("MUSL"));
        for (int i = 1; i < *instance->n_materials; i++)
        {
            if ((*instance->materials_list)[i].id == search)
                return i;
        }
        return 0;
    }
    static uint GetCellIdxById(uint search)
    {
        for (int i = 1; i < *instance->n_materials; i++)
        {
            if ((*instance->materials_list)[i].id == search)
                return i;
        }
        return 0;
    }

    static void OverwriteCellFunction(const char* cell, const CellFunctionOverwrite& overwrite)
    {
        uint idx = instance->str_to_id(const_cast<char*>(cell));
        if (idx)
        {
            AddCellCall ncall{};
            ncall.type = InitMatAddType::function;
            ncall.cell.function = overwrite;
            ncall.cell.function.idx = idx;
            instance->cells2add.push_back(ncall);
        }
    }
};

APIUtil* APIUtil::instance = nullptr;

void mod_main();

DWORD WINAPI MainThread(LPVOID)
{
    AllocConsole();

    FILE* file;
    freopen_s(&file, "CONOUT$", "w", stdout);

    printf("Hello from Plasmid!\n");

    if (MH_Initialize() != MH_OK)
    {
        printf("MinHook init failed\n");
        return 0;
    }
    printf("MinHook initialized\n");

    mod_main();

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