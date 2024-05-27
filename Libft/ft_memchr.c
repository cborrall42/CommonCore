#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
   	unsigned char	*ptr;
	unsigned char	b;
	size_t			i;

	ptr = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ptr == b)
			return (ptr);
		i++;
		ptr++;
	}
	return (NULL); 
}