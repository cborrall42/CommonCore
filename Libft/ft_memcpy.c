#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (ptr == NULL && ptr2 == NULL)
		return (NULL);
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dest);
}