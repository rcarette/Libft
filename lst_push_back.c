/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 11:09:32 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/18 11:10:05 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_push_back(t_list *list, void const *content, size_t content_size)
{
	t_list		*new_link;
	t_list		*temporary;

	temporary = list;
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
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = new_link;
	}
	return (list);
}
