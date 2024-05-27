#include "libft.h"

int ft_toupper(int n)
{
    if (n >= 97 && n <= 122)
        n -= 32;
    return (n);
}