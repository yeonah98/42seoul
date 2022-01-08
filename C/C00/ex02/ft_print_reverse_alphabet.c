#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
  char alpha = 'z';
  
  while (alpha >= 'a')
  {
	write(1, &alpha, 1);
	alpha--;
  }
  
}

int main()
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return 0;
}
