#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*aux;

	curr = *lst;
	if (!lst)
		return ;
	while (curr)
	{
		aux = curr;
		curr = curr->next;
		del(aux->content);
		free(aux);
	}
	*lst = NULL;
}