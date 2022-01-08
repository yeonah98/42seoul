#include <stdlib.h>

void free_box(char **box)
{
    int i;

    i = 0;
    while (i < 4)
    {
        free(box[i]);
        i++;
    }
    free(box);
}