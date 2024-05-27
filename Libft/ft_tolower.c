#include "libft.h"

int ft_tolower(int n)
{
    if (n >= 65 && n <= 90)
        n += 32;
    return (n);
}