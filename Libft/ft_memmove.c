#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (len > 0)
		{
			((char *)dest)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
