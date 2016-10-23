/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 17:29:53 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/27 17:38:15 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*s1;
	int			i;
	size_t		size;

	i = -1;
	size = 0;
	s1 = (char *)s;
	while (s1[++i])
		if (s1[i] == (char)c)
			size++;
	while (*s1)
	{
		if (*s1 == (char)c)
		{
			--size;
			if (size == 0)
				return (s1);
		}
		s1++;
	}
	return (NULL);
}
