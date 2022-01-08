#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j+1])
			{
				ft_swap(&tab[j], &tab[j+1]);
			}
			j++;
		
		}
		i++;
	}
	
}

int main ()
{
	int a[] = {4, 6, 7, 3, 1, 2, 9, 5, 8, 0};
	ft_sort_int_tab(a, 10);
	
	int i = 0;
	while (i < 10)
	{	
		printf("%d ", a[i]);
		i++;
	}
	return 0;
}


