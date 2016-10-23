/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 16:23:06 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/17 09:40:13 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	allocation_board_line(char ***board, char const *str, char c)
{
	size_t		i;
	int			x;

	i = 0;
	x = -1;
	while (str[++x])
	{
		if (str[x] != c)
		{
			i++;
			while (str[x] != c && str[x])
				x++;
		}
	}
	if (!(*board = (char **)malloc(sizeof(*board) * (i + 1))))
		*board = NULL;
}

void	insert_character(char ***board, char const *str, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (*str)
	{
		if (*str != c)
		{
			while (*str != c && *str)
			{
				(*board)[i][x++] = *str;
				str++;
			}
			(*board)[i][x] = '\0';
			x = 0;
			i++;
		}
		str++;
	}
	(*board)[i] = '\0';
}

char	**ft_strsplit(char const *s, char c)
{
	char		**board;
	int			y;
	int			x;
	int			i;

	y = -1;
	i = -1;
	allocation_board_line(&board, s, c);
	while (!(x = 0) && s[++i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				i++;
				x++;
			}
			if (!(board[++y] = (char *)malloc(sizeof(char) * (x + 1))))
				return (NULL);
		}
	}
	insert_character(&board, s, c);
	return (board);
}
