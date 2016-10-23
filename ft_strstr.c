/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 17:38:58 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/27 19:57:59 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s1;
	int		i;
	int		j;
	int		size;

	i = -1;
	j = 0;
	size = ft_strlen(needle);
	s1 = (char *)haystack;
	if (size == 0)
		return (s1);
	while (needle[++i])
		while (s1[j])
		{
			if (needle[i] == s1[j])
			{
				--size;
				if (size == 0)
					return (s1 + j - i);
				i++;
			}
			j++;
		}
	return (NULL);
}
