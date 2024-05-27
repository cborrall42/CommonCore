#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	length;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (length + 1));
	if (!joined)
		return (NULL);
	joined[0] = '\0';
	ft_strlcat(joined, ptr1, length + 1);
	ft_strlcat(joined, ptr2, length + 1);
	return (joined);
}