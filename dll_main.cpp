#include "include/api.h"

void (*init_materials_list)();
void (*give_mutation)(body*, int, int*, int, bool);
void (*set_lava_walls)();

void hooked_give_mutation(body *param_1,int param_2,int *param_3,int param_4,bool param_5)
{
    give_mutation(param_1,param_2,param_3,param_4,param_5);
    set_lava_walls();
}

void hooked_init_materials_list()
{
    init_materials_list();
    printf("%i\n", *n_materials);
    (*materials_list)[*n_materials] = (*materials_list)[1];
    (*materials_list)[*n_materials].base_cost = 43.f;
    (*materials_list)[*n_materials].movement_force = 0.5f;
    (*materials_list)[*n_materials].base_color = real_4(real_4_u_0(real_4_u_0_s_0(1.f, 0.5f, 1.f, 1.f)));
    *n_materials = *n_materials + 1;
}

void main()
{
    GetFunctionAddress(init_materials_list, "init_materials_list");
    GetFunctionAddress(give_mutation, "give_mutation_body_ptr_int_int_ptr_int_bool");
    GetFunctionAddress(set_lava_walls, "set_lava_walls");
    Hook(give_mutation, hooked_give_mutation);
    Hook(init_materials_list, hooked_init_materials_list);
}