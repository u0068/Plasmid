#include "include/api.h"

void hooked_give_mutation(body *param_1,int param_2,int *param_3,int param_4,bool param_5)
{
    give_mutation_6FC80(param_1,param_2,param_3,param_4,param_5);
    set_lava_walls_6F7D0();
}

void main()
{
    Hook(give_mutation_6FC80, hooked_give_mutation);

    int cell_type_index = n_materials + 1;
    printf("%i",cell_type_index);
    materials_list[cell_type_index] = materials_list[1];
    materials_list[cell_type_index].base_cost = 43.f;
    materials_list[cell_type_index].movement_force = 0.5f;
    materials_list[cell_type_index].base_color = real_4(real_4_u_0(real_4_u_0_s_0(1.f, 0.5f, 1.f, 1.f)));
}