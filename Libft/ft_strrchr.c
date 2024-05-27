#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int l;

    l = ft_strlen(s);
    while (*s)
        *s++;
    while (l >= 0)
    {
        if (*s == c)
            return ((char *)s);
        *s--;
        l--;
    }
    if (*s == '\0')
        return ((char *)s);
}