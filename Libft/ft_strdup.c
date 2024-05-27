#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		i;
	int		size;

	size = 0;
	while (str[size])
		size++;
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
