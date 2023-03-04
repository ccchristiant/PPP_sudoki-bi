##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	solver.c			\
		src/check_error.c	\
		src/fill_grid.c		\
		src/solve.c			\
		src/is_safe.c		\
		src/display_grid.c	\

OBJ = $(SRC:.c=.o)

compile:
	@gcc -o solver $(SRC) -Wall -Wextra -I./include

clean:
	@rm -f *~
	@rm -f *.o

fclean:	clean
		@rm -f solver

re:	fclean compile
