#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	num;
	int		sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\f'
		|| *str == '\r' || *str == '\n' || *str == '\v')
		*str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		*str++;
	}
	return ((int)(sign * num));
}