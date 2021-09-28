#include <stdio.h>
#include "func.h"
int main(int argc, char **argv)
{
    char *input = argv[1];
    if (argc != 2) 
        return 0;
    int box_size = size(argv[1]);
    if (box_size != 16)
        return 0;
    char **box = init(box_size);
    dfs(0, 0, box, input);
    free_box(box);
    return 0;
}