/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 22:33:36 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 22:33:37 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Intern.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

Intern::Intern(){}
Intern::Intern(Intern const &){}
Intern::~Intern(){}
Intern	&Intern::operator=(Intern const &){return (*this);}
Form	*makeShrubbery(std::string target){
	return new ShrubberyCreationForm(target);
}

Form	*makeRobotomy(std::string target){
	return new RobotomyRequestForm(target);
}

Form	*makePardon(std::string target){
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeForm(std::string type, std::string target){
	static struct FormType types[3] = {
		{"Shrubbery Creation", makeShrubbery},
		{"Robotomy Request", makeRobotomy},
		{"Presidential Pardon", makePardon}
	};
	for (int i = 0; i < 3; i++){
		if (types[i].type == type){
			std::cout << "Intern creates " << type << std::endl;
			return (types[i].make(target));
		}
	}
	std::cout << "Invalid Form: No type known." << std::endl <<
		"Valid forms \033[4;34m[Shrubbery Creation]\033[0m | " <<
		"\033[4;32m[Robotomy Request]\033[0m | \033[4;36m[Presidential Pardon]\033[0m." 
			<< std::endl;
	return (NULL);
}
