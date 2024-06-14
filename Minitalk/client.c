#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	long int		num;
	int				i;
	int				sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	num = sign * num;
	return (num);
}

void	ft_strlensend(char	*str, pid_t pid)
{
	int	len;
	int	bits;

	len = 0;
	bits = 0;
	while (str[len])
		++len;
	while (bits < 32)
	{
		if ((len >> bits & 1) == 1)
		{
			write(1, "1 ", 2);
			kill(pid, SIGUSR1);
			usleep(1000);
		}
		else
		{
			write(1, "0 ", 2);
			kill(pid, SIGUSR2);
			usleep(1000);
		}
		++bits;
	}
}

void	char_to_binari(char *str, pid_t pid)
{
	int	byte_index;
	int	bits;

	bits = 0;
	byte_index = 0;
	while (str[byte_index] != '\0')
	{
		bits = 0;
		while (bits <= 7)
		{
			if ((str[byte_index] >> bits & 1) == 1)
			{
				write(1, "1 ", 2);
				kill(pid, SIGUSR1);
				usleep(1000);
			}
			else
			{	
				write(1, "0 ", 2);
				kill(pid, SIGUSR2);
				usleep(1000);
			}
			++bits;
		}
		++byte_index;
	}
	byte_index = 0;
	while (byte_index < 8)
	{
		write(1, "0 ", 2);
		kill(pid, SIGUSR2);
		usleep(1000);
		byte_index++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	(void)argc;

	pid = atoi(argv[1]);
	write(1, "LONGITUD PARA RESERVAR MEMORIA:\n", 32);
	ft_strlensend(argv[2], pid);
	write(1, "ARRAY EN BINARIO:\n", 18);
	char_to_binari(argv[2], pid);
	return(0);
}