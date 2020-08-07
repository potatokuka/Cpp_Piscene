/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.class.cpp                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 19:49:48 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 22:09:28 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("Shrubdaddy is Created", 145, 137, target)
{}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(
	ShrubberyCreationForm const &){return *this;}

const std::string tree = "\
              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\\\  _\\, y | \\//\n\
         _\\_.___\\\\, \\\\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._\n\
";

void	ShrubberyCreationForm::_execute(Bureaucrat const &) const{
	std::ofstream of(this->getTarget() + "_shrubbery");
	of << tree << std::endl;
	of.close();
}
