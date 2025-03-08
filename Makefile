##
## EPITECH PROJECT, 2022
## BSQ Project
## File description:
## makefile
##




SRC 	= 		main.c ./lib/sprite_init.c\
				./lib/last_init.c ./lib/my_putstr.c ./lib/my_putchar.c\
				./lib/last_init2.c\

OBJ     =       $(SRC:.c=.o)

NAME 	= 		my_hunter

all: 	$(NAME)

$(NAME) : 		$(OBJ)
		gcc -o $(NAME) $(SRC)  -lcsfml-graphics -lcsfml-system -lcsfml-audio

clean:
		rm -f $(OBJ) /lib/
		rm libmy.a
		rm main.o
fclean:
		rm -f $(NAME)
re: fclean all
