##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile code source
##

SRC	=	lib/my/my_putchar.c \
		lib/my/my_put_nbr.c \
		lib/my/my_putstr.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_strlen.c

OBJ1	=	$(SRC:.=.o)

NAMELIB = libmy.a

all: lib compile clean

lib: $(OBJ1)
	gcc -c $(OBJ1)
	ar rc ./lib/my/$(NAMELIB) *o
	@rm -f *.o

compile:
	@cd ./generator && make && rm -f *.o
	@cd ./solver && make && rm -f *.o

clean:
	@rm -f *~
	@rm -f *.o

fclean:	clean
		@make fclean -C ./solver
		@make fclean -C ./generator

re:	fclean compile

.PHONY: lib all clean fclean re
