#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (*str++)
		i++;
	return i;
}

int main()
{
	char a[] = "jihun";
	int b = ft_strlen(a);
	printf("%d", b);
}
