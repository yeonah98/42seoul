/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyu <yyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 04:43:36 by yyu               #+#    #+#             */
/*   Updated: 2021/09/20 04:50:31 by yyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	d_len;
	int	s_len;
	int	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while (*dest)
	{
		dest++;
		d_len++;
	}
	while (src[s_len])
		s_len++;
	if (size < d_len)
		return (s_len + size);
	while (*src && i < size - d_len - 1)
	{
		i++;
		*dest++ = *src++;
	}
	*dest = '\0';
	return (d_len + s_len);
}
