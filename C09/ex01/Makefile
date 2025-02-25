NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	srcs/ft_strcmp.c

OBJECTS = $(SOURCES:.c=.o)

HEADERS = includes/ft.h

CFLAGS += -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
