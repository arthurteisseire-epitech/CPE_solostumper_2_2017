DLIB	=	$(realpath lib/my)/
SRC	=	my_putstr.c \
		my_puterror.c \
		my_strlen.c
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	cp my.h ../../include
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
