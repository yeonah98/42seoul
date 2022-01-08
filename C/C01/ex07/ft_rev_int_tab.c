#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int a = 0;
	int b = size - 1;
	int tmp;

	while(a < b)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tmp;
		a++;
		b--;
	}
}

int main ()
{
	int a[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(a, 5);

	int i = 0;
	while (i < 5)
	{
	printf("%d\n", a[i]);
	i++;
	}
	return 0;
}
