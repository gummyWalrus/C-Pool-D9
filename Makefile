##
## EPITECH PROJECT, 2022
## B-PDG-300-NCE-3-1-PDGD04am-loys.caucheteux
## File description:
## la pistache de paraigme
##


SRC		=	tests/peasant.test.cpp \
			Peasant.cpp


NAME	=	unit_tests

all: tests_run

tests_run:
			g++ -o unit_tests $(SRC) --coverage -lcriterion
			./unit_tests


fclean:		
		rm -rf $(NAME)

re:			fclean all