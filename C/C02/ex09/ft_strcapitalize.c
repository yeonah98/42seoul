/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyu <yyu@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 03:35:54 by yyu               #+#    #+#             */
/*   Updated: 2021/09/20 03:35:56 by yyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	upcase(char *str)
{
	if('A' <= *str && *str <= 'Z')
		return (1);
	return (0);
}

int	lowercase(char *str)
{
	if('a' <= *str && *str <= 'z')
		return (1);
	return (0);
}

int	alpha(char *str)
{
	if(upcase(str) || lowercase(str))
		return (1);
	return (0);
}

int	num(char *str)
{
	if('0' <= *str && *str <= '9')
		return (1);
	return (0);
}


char	*ft_strcapitalize(char *str)
{
	 char *first;

	 if (ft_is_lowercase(str))
		 *str -= 32;
	 str++;
	 while (*str != '\0')
	 {
		first = str - 1;
		if (!alpha(first) && !num(first) && lowercase(str))
			*str -= 32;
		else if (alpha(first) || num(first) && upcase(str))
			*str += 32;
		else
			str++;
	 }
	 return (str);
}
