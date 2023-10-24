NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes
SRC = ./src/ft_printc.c  \
	./src/ft_printf.c \
	./src/ft_putstr.c \
	./src/ft_strrchr.c \
	./src/ft_hexdec.c \
	./src/ft_putchar.c \
	./src/ft_putnbr.c \
	./src/ft_strlen.c \
	./src/ft_printp.c \
	./src/ft_unsigned.c \


OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re:	fclean all

.PHONY: all clean fclean