#include "include/api.h"

void (*init_materials_list)();
void (*give_mutation)(body*, int, int*, int, bool);
void (*set_lava_walls)();
void (*original_init_mats)();

void hooked_give_mutation(body *param_1,int param_2,int *param_3,int param_4,bool param_5)
{
    give_mutation(param_1,param_2,param_3,param_4,param_5);
    set_lava_walls();
}

void main()
{
    APIUtil::CreateUtilInstance();

    GetFunctionAddress(set_lava_walls, "set_lava_walls");
    Hook("give_mutation_body_ptr_int_int_ptr_int", hooked_give_mutation, give_mutation);

    // Add a black heat sink cell that does nothing

    APIUtil::QueueAddCell(APIUtil::AddCellCall{
        .cell = {
            .simple = {
                .copyFrom = 18, // heat sink cell id = 18
                .color = { 0.f, 0.f, 0.f, 1.f }
            }   
        }
    });
}