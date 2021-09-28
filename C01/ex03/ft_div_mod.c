#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 10;
	int b = 3;
	int c = 0;
	int d = 0;

	ft_div_mod(a, b, &c, &d);
	printf("%d, %d", c,d);
	return 0;
}
