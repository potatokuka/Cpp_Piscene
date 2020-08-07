/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.class.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:08 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:09 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.class.hpp"

Ice::Ice() :
	AMateria("Ice"){
}

Ice::~Ice(){}

Ice::Ice(Ice const &src) :
	AMateria("Ice"){
		_xp = src.getXp();
}

Ice		&Ice::operator=(Ice const &rhs){
	if (this != &rhs)
		_xp = rhs.getXp();
	return (*this);
}

AMateria	*Ice::clone() const{
	Ice	*ret = new(std::nothrow) Ice(*this);
	if (!ret)
	{
		std::cerr << "Failed to clone Ice" << std::endl;
		return NULL;
	}
	return ret;
}

void		Ice::use(ICharacter &target){
	std::cout << "*  shoots a frost bolt at " << target.getName()
		<< " shivers run down their spine." << std::endl;
	AMateria::use(target);
}
