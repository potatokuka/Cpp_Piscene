/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:03 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:04 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.class.hpp"

Cure::Cure() :
	AMateria("Cure"){
}

Cure::~Cure(){}

Cure::Cure(Cure const &src) :
	AMateria("Cure"){
		_xp = src.getXp();
}

Cure		&Cure::operator=(Cure const &rhs){
	if (this != &rhs)
		_xp = rhs.getXp();
	return (*this);
}

AMateria	*Cure::clone() const{
	Cure	*ret = new(std::nothrow) Cure(*this);
	if (!ret)
	{
		std::cerr << "Failed to clone Cure" << std::endl;
		return NULL;
	}
	return ret;
}

void		Cure::use(ICharacter &target){
	std::cout << "* casts Cure on " << target.getName()
		<< " feels a lot better now" << std::endl;
	AMateria::use(target);
}
