CC = gcc

CFLAGS = -Wall -Wextra -Werror

TARGETS = server client

SRCS1 = server.c

SRCS2 = client.c

all: $(TARGETS)

server: $(SRCS1)
	$(CC) $(CFLAGS) -o $@ $^

client: $(SRCS2)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
