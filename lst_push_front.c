/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 11:04:50 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/22 20:17:21 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_push_front(t_list *list, void const *content, size_t content_size)
{
	t_list		*new_link;

	if (list == NULL)
	{
		new_link = ft_lstnew(content, content_size);
		if (new_link == NULL)
			exit(EXIT_FAILURE);
	}
	else
	{
		new_link = ft_lstnew(content, content_size);
		if (new_link == NULL)
			exit(EXIT_FAILURE);
		new_link->next = list;
	}
	return (new_link);
}
