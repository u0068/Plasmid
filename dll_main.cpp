#include "include/api.h"

// void hooked_init_mats()
// {
//     APIUtil::init_materials_list();
//
//     (*APIUtil::materials_list)[*APIUtil::n_materials] = (*APIUtil::materials_list)[26];
//     (*APIUtil::materials_list)[*APIUtil::n_materials].base_color = real_4(real_4_u_0(real_4_u_0_s_0(1.0, 0.5, 1.0, 1.0)));
//     *APIUtil::n_materials += 1;
// }

void mod_main()
{

    printf("Hello World!\n");

    // Hook(APIUtil::init_materials_list, hooked_init_mats);

    APIUtil::QueueAddCell(APIUtil::AddCellCall({.cell{{
            26,
            nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
            real_4_u_0_s_0(1.,0.5,1.,1.)
        }}})
    );

    APIUtil::APIHookAllUtil();
}

