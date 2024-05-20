#include "libft.h"

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
    size_t  i;

    if (argc == 2)
    {
        i = ft_strlen(argv[1]);
        printf("%ld\n", i);
    }
}
*/