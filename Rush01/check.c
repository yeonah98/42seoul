int check_row(int row, int value, char **box)
{
    int i = 0;
    int flag = 0;

    while (i < 4)
    {
        if (box[row][i] == (value + '0'))
            flag = 1;
        i++;
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}

int check_col(int col, int value, char **box)
{
    int i = 0;
    int flag = 0;

    while (i < 4)
    {
        if (box[i][col] == (value + '0'))
            flag = 1;
        i++;
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}