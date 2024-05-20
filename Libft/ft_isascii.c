#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main()
{
    int x = 69;

    printf("%d\n", ft_isascii(x));
}
*/