NAME = libft.a

HEADER = libft.h

SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy

SRCSBONUS = 

OBJS = $(SRCS: .c=.o)
OBJSBONUS = ${SRCSBONUS: .c=.o}

LIB = ar rcs

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

bonus:		${OBJS} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

clean:
	rm -f $(OBJS) ${OBJSBONUS}

fclean: clean
	rm -f $(NAME) bonus

re: fclean all

.PHONY: all clean fclean re