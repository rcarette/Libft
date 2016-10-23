/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 19:43:51 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/15 12:55:07 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_memory;

	if (size > 0)
	{
		new_memory = (void *)malloc(sizeof(void) * size);
		if (new_memory)
		{
			ft_bzero(new_memory, size);
			return (new_memory);
		}
	}
	return (NULL);
}
