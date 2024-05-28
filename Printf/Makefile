NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCL = ft_printf.h

SRCS = ft_printf.c ft_putchar.c ft_funciones.c ft_strlcpy.c

OBJ = $(SRCS:.c=.o)

%.o:%.c $(INCL) Makefile
	$(CC) $(CFLAGS) -c $< -o $@ 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 		
	rm -rf $(OBJ)

fclean: 	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re