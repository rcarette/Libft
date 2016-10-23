/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 09:30:22 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/24 09:54:08 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = -1;
	str = ft_memalloc(ft_strlen(s) + 1);
	if (str)
	{
		while (s[++i])
			str[i] = (*f)(i, s[i]);
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
