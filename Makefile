NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_puthexa.c \
		ft_unbr.c \
		ft_putvoid.c \
		calc.c \
		ft_calchexa.c

OBJ = $(SRC:%.c=%.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	cc $(FLAGS) -c $<

clean:
				$(RM) $(OBJ)
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: all clean fclean re