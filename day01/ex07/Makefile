# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: greed <greed@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/26 17:05:21 by greed         #+#    #+#                  #
#    Updated: 2020/07/27 14:07:41 by greed         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	replace

SRCS			=	src/main.cpp
OBJ				=	src/main.o
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
