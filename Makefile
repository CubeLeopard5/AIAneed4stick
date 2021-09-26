##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

NAME	= 	ai

RM 	= 	rm -f

SRCS	=	src/main.c						\
			src/ai.c						\
			src/turn.c						\
			src/get_wheel_info.c			\
			src/average_dist.c				\
			src/manage_speed_auto.c			\
			src/utilities.c					\
			src/is_track_end.c				\
			src/manage_lidar.c				\

OBJ 	=	$(SRCS.c= .o)

CFLAGS	=	-Wall -O0 -Wextra

all:	$(NAME)

$(NAME):library $(OBJS)
	gcc -o $(NAME) $(SRCS) $(OBJ) -I ./include -L lib/my -l my -g3
library:
	make -C ./lib/my
$(OBJ) :
	gcc -Ofast -g3 -c $(SRCS) -Wall -Wextra --pedantic
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
