#include <stdio.h>

void ft_ultimate_div_mod(int*a, int *b)
{
	int A;
	int B;

	A = *a;
	B = *b;
	*a = A / B;
	*b = A & B;
}

int main()
{
	int a = 42;
	int b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return 0;
}
