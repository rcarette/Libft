/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:12:39 by rcarette          #+#    #+#             */
/*   Updated: 2016/11/04 01:40:44 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*s1;
	char	*s2;
	char	*board;
	
	s1 = (char *)s;
	if (*s1 == '\0')
		return ((char *)s);
	board = ft_strnew(ft_strlen(s) + 1);
	ft_memcpy(board, s, ft_strlen(s) + 1);
	
	/*if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);*/
	while (*board == ' ' || *board == '\n' || *board == '\t')
		board++;
		s1 = ft_strrev(board);
	while (*s1 == ' ' || *s1 == '\n' || *s1 == '\t')
		s1++;
	s1 = ft_strrev(s1);
	ft_memcpy(board, s1, ft_strlen(s1) + 1);
	return (board);
}

int		main(void)
{
	char	*s = "Salut Romain\0Carette";
	char *s1;
	s1 = ft_strtrim(s);
	printf("%s", s1);
	return (0);
}
