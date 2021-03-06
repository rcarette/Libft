/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:27:10 by rcarette          #+#    #+#             */
/*   Updated: 2016/09/28 14:46:24 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		size_s1_s2;

	size_s1_s2 = 0;
	while ((*s1 || *s2) && n-- > 0)
		if ((size_s1_s2 = *s1++ - *s2++) != 0)
			return (size_s1_s2);
	return (size_s1_s2);
}
