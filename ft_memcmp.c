/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 21:34:23 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/28 14:40:23 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str_s1;
	char	*str_s2;

	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	if (*str_s2 == '\0' && ft_strlen(str_s1) == 1)
		return (*str_s1 - *str_s2);
	else if (*str_s1 == '\0' && ft_strlen(str_s2) == 1)
		return (*str_s1 - *str_s2);
	if (n)
		while ((*str_s1 || *str_s2) && n != 0)
		{
			if (*str_s1 > *str_s2)
				return (1);
			else if (*str_s1 < *str_s2)
				return (-1);
			++str_s1;
			++str_s2;
			--n;
		}
	return (0);
}
