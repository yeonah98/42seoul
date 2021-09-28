#include <stdio.h>

int ft_atoi(char *str)
{
	int num = 0;
	int minus = 1;
	while (*str >= 9 && 13 >= *str || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if(*str == '-')
		minus *= -1;
		str++;
	}
	while (*str >= '0' && '9' >= *str)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	num *= minus;
	return num;
}

int main()
{
	char a[] = "---+--+1234ab567";
	int b = ft_atoi(a);
	printf("%d", b);
}
