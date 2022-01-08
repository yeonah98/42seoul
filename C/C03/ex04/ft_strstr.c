/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyu <yyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 03:57:04 by yyu               #+#    #+#             */
/*   Updated: 2021/09/20 04:20:54 by yyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if(*str == *to_find)
		{
			char	*s;
			char	*f;
			
			s = str + 1;
			f = to_find + 1;
			while (s != 0 && f != 0 && *s == *f)
			{
				s++;
				f++;
			}
			if (*f == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

int main()
{
	char a[] = "babbabcd";
	char *b = ft_strstr(a, "bbb");
	char *c = strstr(a, "bbb");

	printf("%s\n%s\n", b, c);
}
