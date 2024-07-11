/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:09:59 by carlos            #+#    #+#             */
/*   Updated: 2024/07/09 14:10:09 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiteri(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	curr = NULL;
	while (lst)
	{
		curr = lst;
		f(curr->content);
		lst = lst->next;
	}
}
