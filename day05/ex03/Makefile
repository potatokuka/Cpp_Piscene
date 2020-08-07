# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: greed <greed@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/30 11:01:52 by greed         #+#    #+#                  #
#    Updated: 2020/07/31 21:52:52 by greed         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	bureaucrat

ifeq				($(shell uname), Linux)
	CXX = g++
else
	CXX = clang++
endif
FILES			=	src/main.cpp\
					src/Form.class.cpp\
					src/Bureaucrat.class.cpp\
					src/RobotomyRequestForm.class.cpp\
					src/ShrubberyCreationForm.class.cpp\
					src/PresidentialPardonForm.class.cpp\
					src/Intern.class.cpp
FLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98
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

$(NAME): $(OBJ)
	@echo "$(YELLOW)/-----	Compiling $(NAME)		-----\\ $(RESET)"
	$(CXX) $(FILES) $(FLAGS) -o $(NAME).out
clean:
	@echo "$(RED)/-----	Cleaning $(NAME)		-----\\ $(RESET)"
	rm -f $(NAME).out
fclean: clean
	@echo "$(BLUE)/-----	Fcleaning $(NAME)		-----\\ $(RESET)"
re: fclean all
.PHONY: all clean fclean re
