/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tables.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 02:47:48 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/12 02:48:04 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sort_table(int *tab, int size)
{
	int		permut;
	int		i;
	int		temporary;
	int		j;

	permut = 1;
	j = 1;
	if (size)
	{
		while (!(i = -1) || permut)
		{
			permut = 0;
			while (++i < (size - j))
			{
				if (tab[i] > tab[i + 1])
				{
					permut = 1;
					temporary = tab[i + 1];
					tab[i + 1] = tab[i];
					tab[i] = temporary;
				}
			}
			j++;
		}
	}
}
