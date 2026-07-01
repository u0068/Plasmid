#include <windows.h>
#include <cstdio>
#include <MinHook.h>
#include "include/api.h"

void hooked_give_mutation(body *param_1,int param_2,int *param_3,int param_4,bool param_5)
{
    give_mutation_6FC80(param_1,param_2,param_3,param_4,param_5);

    set_lava_walls_6F7D0();

    // putting this here so i can turn it on at will in the right context

    // int n_materials = *reinterpret_cast<int(*)>(base + 0x1ed808);
    // printf("%d\n", n_materials);
    //
    // material_t** materials_list = reinterpret_cast<material_t**>(base + 0x1ed800); // i have no idea what im doing lmao
    // int cell_type_index = n_materials + 1;
    // (*materials_list)[cell_type_index] = (*materials_list)[1];
    // (*materials_list)[cell_type_index].base_cost = 43.f;
    // (*materials_list)[cell_type_index].movement_force = 0.5f;
    // (*materials_list)[cell_type_index].base_color = real_4(1., 0.5, 1., 1.);
}

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

    log_printf_218C0("Running with mods!");

    Hook(give_mutation_6FC80, hooked_give_mutation);

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