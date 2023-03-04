##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile code source
##

all: compile clean

compile:
	@cd ./solver && make && rm -f *.o
	@cd ./generator && make && rm -f *.o
clean:
	@rm -f *~
	@rm -f *.o

fclean:	clean
		@make fclean -C ./solver
		@make fclean -C ./generator

re:	fclean compile

.PHONY: lib all clean fclean re
