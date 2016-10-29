/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 15:02:42 by rcarette          #+#    #+#             */
/*   Updated: 2016/10/29 15:10:59 by rcarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size_ptr, size_t new_size)
{
	void	*pt;
	int		i;

	i = -1;
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			exit(EXIT_FAILURE);
		return (pt);
	}
	else
	{
		pt = (void *)malloc(size_ptr + new_size);
		if (pt == NULL)
			exit(EXIT_FAILURE);
		memcpy(pt, ptr, ft_strlen(ptr) + 1);
		free(ptr);
		ptr = NULL;
		return (pt);
	}
}
int		main(void)
{
	char	str[] = " CARETTE !";
	char	*ptr = NULL;

	ptr = ft_realloc(ptr, 0, 7);
	memcpy(ptr, "Romain", 7);
	ptr = ft_realloc(ptr, ft_strlen(ptr) + 1, ft_strlen(str) + 1);
	strcat(ptr, str);
	printf("%s", ptr);
	ptr = ft_realloc(ptr, ft_strlen(ptr) + 1, ft_strlen("Et je vais chez 42 !") + 1);
	strcat(ptr, "Et je vais chez 42 !");
	printf("%s", ptr);
	free(ptr);
	ptr = NULL ;
	return (0);
}
