#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main()
{
	int a = 1;
	int b = 42;

	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return 0;
}

