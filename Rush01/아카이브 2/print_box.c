#include <unistd.h>

void print_box(char **box)
{
    int i = -1;
    int j = -1;
    
    while (++i < 4)
    {
        j = -1;
        while (++j < 4)
        {
            write(1, &box[i][j], 1);
            if (j != 3)
                write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}