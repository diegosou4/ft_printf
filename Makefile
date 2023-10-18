NAME = libftprintf.a
CC = cc
SRC = ./src/ft_printc.c  \
	./src/ft_printf.c \
	./src/ft_putstr.c \
	./src/ft_strrchr.c \
	./src/ft_hexdec.c \
	./src/ft_putchar.c \
	./src/ft_putnbr.c \
	./src/ft_atoi.c \
	./src/ft_strlen.c \
	


INCLUDES = ./includes/ft_printf.h 

OBJECTS = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re:	fclean all
