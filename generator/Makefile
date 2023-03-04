##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	src/error_handle.c	\
		src/set_value.c	\
		generator.c	\

compile:
	@gcc -o generator -g3 $(SRC) -L ../lib/my -lmy

clean:
	@rm -f *~
	@rm -f *.o

fclean:	clean
	@rm -f generator

re:	fclean compile
