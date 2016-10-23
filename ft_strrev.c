/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 21:27:43 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/22 19:55:52 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int			size;
	int			i;
	char		temporary;

	i = -1;
	if (s == NULL || ft_strlen(s) < 1)
		return (0);
	else
	{
		size = ft_strlen(s);
		while (++i < --size)
		{
			temporary = s[size];
			s[size] = s[i];
			s[i] = temporary;
		}
	}
	return (s);
}
