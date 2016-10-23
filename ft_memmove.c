/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 22:50:46 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/13 23:16:18 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str_temporary;

	str_temporary = (char *)malloc(sizeof(char) + n);
	if (str_temporary)
	{
		ft_memcpy(str_temporary, src, n);
		ft_memcpy(dest, str_temporary, n);
	}
	else
		return (NULL);
	return (dest);
}
