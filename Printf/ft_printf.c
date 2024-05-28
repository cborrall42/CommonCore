#include "ft_printf.h"

int	format_type(char *format, va_list args, int *len, int i)
{
	int	flag;

	flag = 0;
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		flag = ft_putnbr(va_arg(args, int), len, 0);
	else if (format[i + 1] == 's')
		flag = ft_putstr(va_arg(args, char *), len);
	else if (format[i + 1] == 'p')
		flag = ft_puthex_p(va_arg(args, unsigned long), len, 0, 0);
	else if (format[i + 1] == 'c')
		flag = ft_putchar(va_arg(args, int), len);
	else if (format[i + 1] == 'u')
		flag = ft_putdigit(va_arg(args, unsigned int), len, 0);
	else if (format[i + 1] == 'x')
		flag = ft_puthexa(va_arg(args, unsigned int), len, 'x', 0);
	else if (format[i + 1] == 'X')
		flag = ft_puthexa(va_arg(args, unsigned int), len, 'X', 0);
	else if (format[i + 1] == '%')
		flag = ft_putchar('%', len);
	return (flag);
}

void	ft_esformato(char *format, va_list args, int *len, int *flag)
{
	int	i;

	i = 0;
	while (format[i] && *flag != -1)
	{
		if (format[i] == '%')
		{
			*flag = format_type(format, args, len, i);
			i++;
		}
		else
			*flag = ft_putchar(format[i], len);
		i++;
	}
}

int	ft_putstr(char *str, int *len)
{
	int		i;
	int		flag;
	char	*string;
	int		aux;

	flag = 0;
	if (!str)
	{
		string = "(null)";
		i = 0;
		ft_putstr(string, len);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			aux = flag;
			flag = ft_putchar(str[i++], len);
			if (aux > flag)
				return (-1);
		}
	}
	return (flag);
}

int	ft_putnbr(int num, int *len, int bule)
{
    /*
	if (num < -2147483648 || num > 2147483647)
		return (-1);
        */
	if (num == -2147483648)
	{
		bule = ft_putstr("-2147483648", len);
		return (bule);
	}
	if ((num < 0) && (bule >= 0))
	{
		bule = ft_putchar('-', len);
		num *= -1;
	}
	if ((num > 9) && (bule >= 0))
	{
		bule = ft_putnbr(num / 10, len, bule);
		bule = ft_putnbr(num % 10, len, bule);
	}
	else if ((num <= 9 && num >= 0) && (bule >= 0))
		bule = ft_putchar((num % 10) + '0', len);
	return (bule);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		len;
	int		flag;

	len = 0;
	flag = 0;
	va_start(args, format);
	ft_esformato((char *)format, args, &len, &flag);
	va_end(args);
	if (flag == -1)
		return (-1);
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	printf(" mi printf %d\n", ft_printf("%x", 123));
	printf(" original %d\n", printf("%x", 123));
	ft_printf("%s\n", "");
	ft_printf("%d\n", -10);
}
*/