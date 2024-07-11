/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:39:51 by carlos            #+#    #+#             */
/*   Updated: 2024/07/09 13:40:05 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*curr;

	curr = malloc(sizeof(t_list));
	if (!curr)
		return (NULL);
	curr->content = content;
	curr->next = NULL;
	return (curr);
}
