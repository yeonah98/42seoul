/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 17:45:10 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/15 01:25:31 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s2 - *s1);
		++s1;
		++s2;
	}
	if (*s1 == *s2)
		return (1);
	return (*s2 - *s1);
}

void	ft_sort(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) < 0)
				ft_swap(&av[i], &av[j]);
			++j;
		}
		++i;
	}
}

void	ft_print_str(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	ft_sort(ac, av);
	while (i < ac)
		ft_print_str(av[i++]);
	return (0);
}
