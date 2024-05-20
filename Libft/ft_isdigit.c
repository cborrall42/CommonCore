#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main()
{
    int x = 8;

    printf("%d\n", ft_isdigit(x));
}
*/