# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: greed <greed@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/26 14:52:51 by greed         #+#    #+#                  #
#    Updated: 2020/07/26 14:52:54 by greed         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	violence

SRCS			=	src/main.cpp\
					src/Weapon.class.cpp\
					src/HumanA.class.cpp\
					src/HumanB.class.cpp
OBJ				=	src/main.o\
					src/Weapon.class.o\
					src/HumanA.class.o\
					src/HumanB.class.o
CXXFLAGS		=	-Wall -Wextra -Werror -pedantic -ansi
CXX				=	clang++
# COLORS
WHITE   = \x1b[37;01m
CYAN    = \x1b[36;01m
PINK    = \x1b[35;01m
BLUE    = \x1b[34;01m
YELLOW  = \x1b[33;01m
GREEN   = \x1b[32;01m
RED     = \x1b[31;01m
BLACK   = \x1b[30;01m
RESET   = \x1b[0m

all: $(NAME)

%.o: %.c
	$(CXX) $(CXXFLAGS) -o $@ -c $<
$(NAME): $(OBJ)
	@echo "$(YELLOW)/-----	Compiling zombie		-----\\ $(RESET)"
	$(CXX)  -o $(NAME) $(OBJ)
clean:
	@echo "$(RED)/-----	Cleaning zombie		-----\\ $(RESET)"
	rm -f $(OBJ)
fclean: clean
	@echo "$(BLUE)/-----	Fcleaning zombie		-----\\ $(RESET)"
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
