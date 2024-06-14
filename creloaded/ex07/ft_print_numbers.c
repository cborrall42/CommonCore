#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char    a;

    a = 48;
    while (a <= 57)
    {
        ft_putchar(a);
        a++;
    }
}