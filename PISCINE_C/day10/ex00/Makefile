NAME = libft.a

IDIR = ./includes/
SRCDIR = ./srcs/

SOURCES = $(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_swap.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_strcmp.c

all: $(NAME)

$(NAME):
	gcc -c $(SOURCES) -I$(IDIR)
	ar rc $(NAME) ft_putstr.o ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o

clean:
	/bin/rm -f ft_putstr.o ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
