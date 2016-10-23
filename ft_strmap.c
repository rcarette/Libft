/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 09:20:18 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/24 09:30:00 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = -1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str)
	{
		while (*s)
			str[++i] = (*f)(*s++);
		str[++i] = '\0';
		return (str);
	}
	return (NULL);
}
