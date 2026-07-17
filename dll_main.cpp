#include "include/api.h"

auto set_lava_walls =
    Resolve<void(*)()>(
        "set_lava_walls"
    );


void hooked_lava_walls()
{

}

void mod_main()
{
    printf("mod_main\n");

    printf("%p\n", set_lava_walls);

    Hook(set_lava_walls, hooked_lava_walls);

    // Add a black heat sink cell that does nothing

    // APIUtil::QueueAddCell(APIUtil::AddCellCall{
    //     .cell = {
    //         .simple = {
    //             .copyFrom = 18, // heat sink cell id = 18
    //             .color = { 0.f, 0.f, 0.f, 1.f }
    //         }
    //     }
    // });
}

