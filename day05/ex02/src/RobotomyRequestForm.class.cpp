/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.class.cpp                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 19:49:53 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 19:49:54 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("Robotomy Request", 72, 45, target)
{}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm	&RobotomyRequestForm::operator=(
	RobotomyRequestForm const &){return *this;}
void	RobotomyRequestForm::_execute(Bureaucrat const &) const{
	srand(time(NULL));
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomy has failed on " << this->getTarget() << "." << std::endl; 
}
