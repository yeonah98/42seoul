int size(char *str)
{
    char *ptr;
    int i;
    int size;

    ptr = str;
    i = 0;
    size = 0;
    while(ptr[i] != '\0')
    {
        if (ptr[i] >= '1' && ptr[i] <= '4')
        {
            size++;
        }
        i++;
    }
    return size;
}