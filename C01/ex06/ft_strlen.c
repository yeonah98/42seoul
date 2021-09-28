#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

int main()
{
	char a[] = "Jihun";
	int a_length = ft_strlen(a);
	printf("%d", a_length);
	return 0;
}
