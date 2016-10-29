/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 12:05:56 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/29 02:12:14 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		negative;
	int		result;

	negative = 1;
	result = 0;
	if (nptr == NULL)
		return (0);
	while (*nptr <= 32)
		nptr++;
	if (*nptr == '-')
	{
		nptr++;
		negative = -1;
	}
	if ((*nptr == '-' || *nptr == '+') && negative == -1)
		return (0);
	(*nptr == '+') ? nptr++ : 0;
	while (*nptr >= '0' && *nptr <= '9')
		result = ((result * 10) + *nptr++ - '0');
	return (result * negative);
}
