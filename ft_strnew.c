/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 07:12:42 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/15 12:39:06 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size > 0)
	{
		str = (char *)malloc(sizeof(char) * size);
		if (str != NULL)
		{
			ft_memset(str, '\0', size);
			return (str);
		}
	}
	return (NULL);
}
