#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/* ft_printf.c */
int				ft_printf(char const *format, ...);
int				ft_putchar(int c, int *len);
int				ft_putstr(char *str, int *len);
int				format_type(char *format, va_list args, int *len, int i);
void			ft_esformato(char *format, va_list args, int *len, int *flag);
int				ft_putnbr(int num, int *len, int bule);

/* ft_funciones.c */
int				ft_puthexa(unsigned int num, int *len, char check, int bule);
int				ft_putdigit(unsigned int num, int *len, int flag);
int				ft_puthex_p(unsigned long numero, int *len, int x, int aux);

/* ft_putchar.c */
int				ft_putchar(int c, int *len);

/* ft_strlcy.c */
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
#endif
