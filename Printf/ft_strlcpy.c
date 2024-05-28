#include "ft_printf.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < destsize)
	{
		*dest++ = *src++;
		++i;
	}
	if (i < destsize)
		*dest = 0;
	while (*src++)
		++i;
	return (i);
}