#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
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