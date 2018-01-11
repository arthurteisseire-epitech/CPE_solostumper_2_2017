##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

ROOT	=	$(realpath ..)
DSRC_UT	=	$(realpath .)
DSRC	=	$(ROOT)/src
INC	=	$(ROOT)/include
SRC	=	$(DSRC)/is_palindrome.c
SRC_UT	=	$(DSRC_UT)/test_palindrome.c
LIB	=	my
DLIB	=	$(ROOT)/lib/my
LIBS	=	-L$(DLIB) -l$(LIB)
CFLAGS	=	-Wall -W -Wextra -I$(INC)
LDFLAGS	=	-lcriterion -lgcov -coverage
OBJ	=	$(SRC_UT:.c=.o) $(SRC:.c=.o)
NAME	=	units

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LIBS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test_run: all
	./$(NAME)
