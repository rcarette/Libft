/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 15:28:03 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/15 13:33:40 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char const *src, size_t n)
{
	size_t			i;
	int				y;

	i = 0;
	y = -1;
	if (n > 0 && src != NULL)
	{
		while (dest[++y])
			;
		while (i < n && src[i])
			dest[y++] = src[i++];
		dest[y] = '\0';
	}
	return (dest);
}
