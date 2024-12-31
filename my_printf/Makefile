NAME = libftprintf.a

SRC = ft_printf.c ft_putstr.c ft_int_number.c ft_hexnumber.c ft_unsigned.c ft_pointer.c ft_step.c

CC = cc

FLAGS = -Wall -Wextra -Werror

OSRC = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OSRC)
	ar -rc $(NAME) $?

main: all clean
	cc main.c $(NAME)

%.o:%.c
	$(CC) -c $(FLAGS) $?

cleana:
	rm -f a.out

clean:
	rm -f $(OSRC)

fclean:
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re main