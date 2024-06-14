#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	j = 0;

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr/10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
}

int power(int index)
{
	int result = 1;

	if (index == 0)
		return (result);
    while (index > 0)
    {
        result *= 2;
        index--;
    }
    return (result);
}

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	take_length(int sig, int x)
{
	static int	y = 0;

	if (sig == SIGUSR1)
	{
		x += power(y);
		y++;
	}
	else
		y++;
	return (x);
}	

int	take_char(int sig, int x, int y)
{
	if (sig == SIGUSR1)
	{
		x += power(y);
		y++;
	}
	else if (sig == SIGUSR2)
		y++;
	return (x);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	put_char(char	*result, int x)
{
	static	int i = 0;

	if (x != 0)
	{
		result[i] = x;
		i++;
	}
	else
	{
		result[i] = '\0';
		ft_putstr(result);
	}
}

void	sig_handler(int sig, siginfo_t *info, void *context)
{
	(void)*info;
	(void)*context;
	static	char	*result;
	static	int	x = 0;
	static	int y = 0;
	//char	c;

	if (j < 32)
	{
		x = take_length(sig, x);
		j++;
	}
	if (j == 32)
	{
		result = malloc(sizeof(char) * (x + 1));
		j++;
		x = 0;
	}
	else if (j > 32)
	{
		x = take_char(sig, x, y);
		y++;
		if (y == 8)
		{
			put_char(result, x);
			y = 0;
		}
	}

	/*
	if (sig == SIGUSR1)
	{
		x += power(y);
		y++;
	}
	if (sig ==  SIGUSR2)
		y++;

	if (y == 8)
	{
		if (x != 0)
		{
			c = x;
			result = ft_strjoin(result, &c);
			ft_putstr_fd(result, 1);
			x = 0;
			y = 0;
		}
		else
		{
			write(1, "es 0\n", 4);
			result = ft_strjoin(result, "\0");
		}
	}
	*/
}

int	main()
{
	struct	sigaction sa;
	pid_t	pid;

	pid = getpid();
	printf("PID del servidor: %d\n", pid);
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART;
	sa.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		sleep(1);
	return (0);
}