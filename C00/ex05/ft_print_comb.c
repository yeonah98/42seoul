#include <unistd.h>

void ft_print_comb(void){

	char comb[5];

	comb[0] = '0';
	comb[3] = ',';
	comb[4] = ' ';

	while (comb[0] <= '6')
	{
		comb[1] = comb[0];
		while (++comb[1] <= '8')
		{
			comb[2] = comb[1];
			while (++comb[2] <= '9')
			{
				write(1, comb, 5);
			}
		}

	     comb[0]++;	
	}

	write(1, "789", 3);
}

int main ()
{
	ft_print_comb();
	return 0;
}
