#include "ft_printf.h"

int	ft_putchar(int c, int *len)
{
	if (write (1, &c, 1) == -1)
	{
		*len = -1;
		return (-1);
	}
	(*len)++;
	return (*len);
}