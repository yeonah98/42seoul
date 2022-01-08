#include <stdio.h>
#include "func.h"

int judge_rightrow(char pivot, int row, char **box)
{
    int i;
    char max;
    int cnt;

    i = 3;
    cnt = 1;
    max = box[(row%8)/2][i];
    while (i >= 0)
    {
        if (max < box[(row%8)/2][i])
        {
            cnt++;
            max = box[(row%8)/2][i];
        }
        i--;
    }
    if (pivot == cnt + '0')
        return 1;
    else
        return 0;
}

int judge_leftrow(char pivot, int row, char **box)
{
    int i;
    char max;
    int cnt;

    i = 0;
    cnt = 1;
    max = box[(row%8)/2][i];
    while (i < 4)
    {
        if (max < box[(row%8)/2][i])
        {
            cnt++;
            max = box[(row%8)/2][i];
        }
        i++;
    }
    if (pivot == cnt + '0')
        return 1;
    else
        return 0;
}

int judge_downcol(char pivot, int col, char **box)
{
    int i;
    char max;
    int cnt;

    i = 3;
    cnt = 1;
    max = box[i][(col%8)/2];
    while (i >= 0)
    {
        if (max < box[i][(col%8)/2])
        {
            cnt++;
            max = box[i][(col%8)/2];
        }
        i--;
    }
    if (pivot == cnt + '0')
        return 1;
    else
        return 0;
}

int judge_upcol(char pivot, int col, char **box)
{
    int i;
    char max;
    int cnt;

    i = 0;
    cnt = 1;
    max = box[i][(col)/2];
    while (i < 4)
    {
        if (max < box[i][(col)/2])
        {
            cnt++;
            max = box[i][(col)/2];
        }
        i++;
    }
    if (pivot == cnt + '0')
        return 1;
    else
        return 0;
}

int judge(char **box, char *str)
{
    int i;
    int j = 0;
    int flag = 0;

    i = 0;
    while (i < 31)
    {
        if (i < 7 && str[i] != 32)
            flag = judge_upcol(str[i], i, box);
        else if (i < 15 && str[i] != 32)
            flag = judge_downcol(str[i], i, box);
        else if (i < 23 && str[i] != 32)
            flag = judge_leftrow(str[i], i, box);
        else if (i < 31 && str[i] != 32)
            flag = judge_rightrow(str[i], i, box);
        if (flag == 0)
            return 0;
        i++;
    }
    return 1;
}