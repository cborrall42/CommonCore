#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	size_t	destlen;
	size_t	srcsize;
	size_t	i;

	destlen = ft_strlen(dest);
	srcsize = ft_strlen(src);
	i = 0;
	if (!destsize)
		return (srcsize);
	while (src[i] && destlen + i < destsize - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (destlen > destsize)
		return (srcsize + destsize);
	dest[destlen + i] = '\0';
	return (srcsize + destlen);
}
