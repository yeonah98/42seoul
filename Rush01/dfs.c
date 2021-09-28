#include "func.h"
int global_print_cnt = 0;

void dfs(int row, int col, char **box, char *str)
{
    int value;
  
    if (row == 4 && col == 0)
    {
        if (judge(box, str) && global_print_cnt == 0)
        {
            print_box(box);
            global_print_cnt = 1;
        }
    }
    else {
        value = 0;
        while (++value < 5)
        {
            if (check_row(row, value, box) && check_col(col, value, box))
            {
                box[row][col] = value + '0';
                if (col == 3)
                    dfs(row + 1, 0, box, str);
                else
                    dfs(row, col + 1, box, str);
                box[row][col] = '0';
            }
        }
    }
}