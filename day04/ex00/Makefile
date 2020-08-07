# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: greed <greed@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/30 11:01:52 by greed         #+#    #+#                  #
#    Updated: 2020/07/30 11:02:56 by greed         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	sheeple

SRCS			=	src/main.cpp\
					src/Sorcerer.class.cpp\
					src/Peon.class.cpp\
					src/Victim.class.cpp
OBJ				=	src/main.o\
					src/Sorcerer.class.o\
					src/Peon.class.o\
					src/Victim.class.o
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
	@echo "$(YELLOW)/-----	Compiling $(NAME)		-----\\ $(RESET)"
	$(CXX)  -o $(NAME) $(OBJ)
clean:
	@echo "$(RED)/-----	Cleaning $(NAME)		-----\\ $(RESET)"
	rm -f $(OBJ)
fclean: clean
	@echo "$(BLUE)/-----	Fcleaning $(NAME)		-----\\ $(RESET)"
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
