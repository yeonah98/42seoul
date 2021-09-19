/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyu <yyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 03:36:18 by yyu               #+#    #+#             */
/*   Updated: 2021/09/20 03:36:19 by yyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putuns(unsigned char uns, int i)
{
	int put;

	if (i == 1)
		put = uns / 16;
	else
		put = uns % 16;
	if (put < 10)
		put += 48;
	else
		put += 87;
	write(1, &put, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	uns;

	while (*str)
	{
		uns = *str;
		if (uns < 32 || uns >= 127)
		{
			write(1, "\\", 1);
			putuns(uns, 1);
			putuns(uns, 2);
		}
		else
			write(1, str, 1);
		str++;
	}
}
