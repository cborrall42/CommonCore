#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int n);

size_t ft_strlen(const char *str);

void    *ft_memset(void *str, int c, size_t n);

void    ft_bzero(void *str, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t len);

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

size_t	ft_strlcat(char *dest, char *src, size_t destsize);

#endif