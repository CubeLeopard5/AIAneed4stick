##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile lib
##

SRC = 	*.c

OBJ = 	$(SRC:.c=.o)

NAME = libmy.a

all : 	$(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ) :
	gcc -c $(SRC) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
