#include "../include/api.h"

void hooked_init_materials_list()
{
    APIUtil::init_materials_list();

    auto materials_list = APIUtil::materials_list;
    auto n_materials = APIUtil::n_materials;

    (*materials_list)[*n_materials] = (*materials_list)[7];
    (*materials_list)[*n_materials].base_cost = float(*n_materials);
    (*materials_list)[*n_materials].movement_force *= 120;
    (*materials_list)[*n_materials].density *= (*materials_list)[*n_materials].density;
    (*materials_list)[*n_materials].base_color = real_4{real_4_u_0{1.0, 0.5, 1.0, 1.0}};

    *n_materials = *n_materials + 1;
}

void mod_main()
{
    printf("Hello World!\n");

    Hook("init_materials_list", hooked_init_materials_list);
}