#include "../include/api.h"

void hooked_set_lava_walls()
{
    APIUtil::set_lava_walls(); //call original function
    printf("Walls are lava!");
}

void mod_main()
{
    printf("Hello World!\n");

    Hook("set_lava_walls", hooked_set_lava_walls);

    APIUtil::AddCellCall newCell{};
    newCell.cell.simple.copyFrom = 26;
    newCell.cell.simple.color = real_4_u_0_s_0(1.0, 0.5, 1.0, 1.0);
    QueueAddCell(newCell);

    APIUtil::APIHookAllUtil();
}