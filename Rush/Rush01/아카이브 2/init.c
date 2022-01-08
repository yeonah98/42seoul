#include <stdlib.h>
#include <stdio.h>

char **init(int size)
{
    char **box;
    int i;
    int j;

    box = malloc(sizeof(char *) * 4);
    i = 0;
    while (i < 4)
    {
        box[i] = malloc(sizeof(char) * 4);
        j = 0;
        while (j < 4)
        {
            box[i][j] = '0';
            j++;
        }
        i++;
    }
    return box;
}