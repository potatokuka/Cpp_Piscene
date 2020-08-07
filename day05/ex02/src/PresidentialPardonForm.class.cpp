/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.class.cpp                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 19:49:57 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 19:49:58 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	Form("Presidential Pardon", 25, 5, target)
{}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm	&PresidentialPardonForm::operator=(
	PresidentialPardonForm const &){return *this;}
void	PresidentialPardonForm::_execute(Bureaucrat const &) const{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox ";
}
