/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 18:22:21 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/22 18:35:35 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temporary;

	while (*alst != NULL)
	{
		temporary = *alst;
		(*alst) = (*alst)->next;
		(*del)(temporary->content, temporary->content_size);
		free(temporary);
	}
	*alst = NULL;
}
