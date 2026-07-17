#include "include/api.h"

void mod_main()
{
    printf("Hello World!\n");

    APIUtil::AddCellCall newCell{};
    newCell.cell.simple.copyFrom = 26;
    newCell.cell.simple.color = {1.0, 0.5, 1.0, 1.0};
    QueueAddCell(newCell);

    APIUtil::APIHookAllUtil();
}

