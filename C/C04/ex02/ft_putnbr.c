#include <unistd.h>

void rec(int nb)
{
	if(nb >= 10)
	{
		rec(nb / 10);
		rec(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	rec(nb);
}

int main()
{
	int a = 42;
	ft_putnbr(a);
}
