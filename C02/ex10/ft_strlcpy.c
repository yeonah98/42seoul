/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyu <yyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 03:36:07 by yyu               #+#    #+#             */
/*   Updated: 2021/09/20 03:36:08 by yyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	int i;

	i = 0;
	while (src[len])
		len++;
	while (i < len && i < size - 1)
	{
		*dest++ = *src++;
		i++;
	}
	if (len > 0)
		dest[i] = '\0';
	return (len);
}
