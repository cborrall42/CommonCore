#include "ft_printf.h"

int	ft_putdigit(unsigned int num, int *len, int flag)
{
	char	digit;

	if ((num > 9) && (flag >= 0))
	{
		flag = ft_putdigit(num / 10, len, flag);
		flag = ft_putdigit(num % 10, len, flag);
	}
	else
	{
		if (flag != -1)
		{
			digit = (num % 10) + '0';
			flag = ft_putchar(digit, len);
		}
	}
	return (flag);
}

int	ft_put0x(int x, char *str, int *len)
{
	int	flag;
	int	i;
	int	aux;

	flag = 0;
	i = 0;
	if (x == 0)
	{
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

int	ft_puthex_p(unsigned long numero, int *len, int x, int aux)
{
	char	espacio[17];
	int		i;
	int		flag;

	i = 16;
	if (x == 0)
	{
		flag = ft_put0x(0, "0x", len);
		if (aux > flag)
			return (-1);
	}
	if (numero == 0)
	{
		flag = ft_putchar('0', len);
		return (flag);
	}
	espacio[i] = '\0';
	while (numero > 0 && i > 0)
	{
		i--;
		espacio[i] = "0123456789abcdef"[numero % 16];
		numero /= 16;
	}
	flag = ft_putstr(&espacio[i], len);
	return (flag);
}

int	ft_puthexa(unsigned int num, int *len, char check, int bule)
{
	char	str[20];

	if (num == 0)
	{
		bule = ft_putchar('0', len);
		return (bule);
	}
	if (check == 'X')
		bule = ft_strlcpy(str, "0123456789ABCDEF", 17);
	else if (check == 'x')
		bule = ft_strlcpy(str, "0123456789abcdef", 17);
	if (num >= 16)
	{
		bule = ft_puthexa(num / 16, len, check, bule);
		if (bule == -1)
			return (bule);
	}
	bule = ft_putchar(str[num % 16], len);
	if (bule == -1)
		return (bule);
	return (bule);
}