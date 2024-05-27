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