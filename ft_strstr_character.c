/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_character.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 09:40:38 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/22 20:07:01 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr_character(char const *s1, int character)
{
	char	*str;
	int		i;

	i = -1;
	if (s1 == NULL || *s1 == '\0')
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str != NULL)
	{
		while (*s1)
		{
			if (*s1 == character)
			{
				str[++i] = '\0';
				return (str);
			}
			else
				str[++i] = *s1++;
		}
	}
	return (NULL);
}
