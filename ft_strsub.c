/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 10:40:53 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/22 19:56:41 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (len > 0 && s != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		while (s[++i])
			if (i >= (int)start && len > 0)
			{
				str[j++] = s[i];
				str[j] = '\0';
				len--;
			}
		return (str);
	}
	return (NULL);
}
