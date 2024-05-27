#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *a;
    unsigned char   *b;
    size_t i;

    a = (unsigned char *)s1;
    b = (unsigned char *)s2;
    i = 0;
    while (*a && *a == *b && i <= n)
    {
        *a++;
        *b++;
        i++;
    }
    return ((unsigned char *)a - (unsigned char *)b);
}