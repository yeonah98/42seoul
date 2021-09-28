#include <unistd.h>
	
void rec(int nb)
{
	char ch;

	if (nb == 0)
	{
		return;
	}
	else
	{
		rec(nb / 10);
		ch = 48 + nb % 10;
		write(1, &ch, 1);
	}
}

void ft_putnbr(int nb)
{
	char ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / 10));
		ch = 48 - nb % 10;
	}
	else
	{
		rec(nb / 10);
		ch = 48 + nb % 10; 

	}
	write(1, &ch,1);
}

int main ()
{
	ft_putnbr(-342);
}
