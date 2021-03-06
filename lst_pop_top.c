/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pop_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 20:29:45 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/22 23:49:23 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_pop_top(t_list **list)
{
	t_list		*temporary;

	if (is_empty_lst(*list) == 0)
		exit(EXIT_FAILURE);
	if (lst_lenght(*list) == 1)
	{
		free(*list);
		*list = NULL;
	}
	else
	{
		temporary = *list;
		(*list) = (*list)->next;
		free(temporary->content);
		free(temporary);
		temporary = NULL ;
	}
}
