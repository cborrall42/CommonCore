/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:14:24 by carlos            #+#    #+#             */
/*   Updated: 2024/07/09 13:14:39 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_e;
	void	*content;

	if (!lst || !f)
		return (0);
	new = 0;
	while (lst)
	{
		content = f(lst->content);
		if (content)
			new_e = ft_lstnew(content);
		if (!content || !new_e)
		{
			free (content);
			ft_lstclear (&new, del);
			return (0);
		}
		ft_lstadd_back(&new, new_e);
		lst = lst->next;
	}
	return (new);
}
