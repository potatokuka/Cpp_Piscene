/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:19:54 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:19:55 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.class.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const &type) :
	_type(type), _xp(0){
}

AMateria::~AMateria(){}

AMateria::AMateria(AMateria const &src):
	_type(src.getType()), _xp(src.getXp()){	
}

AMateria			&AMateria::operator=(AMateria const &rhs){
	if (&rhs != this)
	{
		_type = rhs.getType();
		_xp = rhs.getXp();
	}
	return (*this);
}

std::string const	&AMateria::getType() const{
	return (_type);
}

unsigned int		AMateria::getXp() const{
	return (_xp);
}

void				AMateria::use(ICharacter &target){
	(void)target;
	this->_xp += 10;
}
