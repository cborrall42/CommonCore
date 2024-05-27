#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        *s++;
    }
    if (*s == '\0')
        return ((char *)s);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
    int x = 65;
    char    *a = ft_strchr(argv[1], x);
    printf("%c\n", *a);
}
*/