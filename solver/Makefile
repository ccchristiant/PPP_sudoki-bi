##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	src/error_handle.c	\
		src/set_value.c	\
		solver.c

compile:
	@gcc -o solver $(SRC) -L ../lib/my -lmy

clean:
	@rm -f *~
	@rm -f *.o

fclean:	clean
		@rm -f solver

re:	fclean compile
