/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:12:39 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/29 02:24:01 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*s1;

	if (s == NULL || ft_strlen(s) < 1)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	s1 = ft_strrev((char *)s);
	while (*s1 == ' ' || *s1 == '\n' || *s1 == '\t')
		s1++;
	s1 = ft_strrev(s1);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
