/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:40:26 by jaeskim           #+#    #+#             */
/*   Updated: 2020/07/13 17:23:08 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	g_board[10];
int g_cnt;

int		ft_is_vaild_position(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (g_board[i] == g_board[x])
			return (0);
		if (g_board[i] > g_board[x])
		{
			if (x - i == g_board[i] - g_board[x])
				return (0);
		}
		else
		{
			if (x - i == g_board[x] - g_board[i])
				return (0);
		}
		++i;
	}
	return (1);
}

void	ft_find_queens_location(int x)
{
	int		i;
	char	tmp;

	i = 0;
	if (x < 10)
	{
		while (i < 10)
		{
			g_board[x] = i;
			if (ft_is_vaild_position(x))
				ft_find_queens_location(x + 1);
			i++;
		}
	}
	else
	{
		g_cnt++;
		while (i < 10)
		{
			tmp = g_board[i] + '0';
			write(1, &tmp, 1);
			++i;
		}
		write(1, "\n", 1);
	}
}

int		ft_ten_queens_puzzle(void)
{
	ft_find_queens_location(0);
	return (g_cnt);
}
int main()
{
	printf("%d \n", ft_ten_queens_puzzle());
}