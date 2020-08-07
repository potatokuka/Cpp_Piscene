/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.class.cpp                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:51:56 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:03:00 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.class.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout << "\033[1;31m<Assault Terminator>\033[0m * Drop ship has been activated *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "\033[1;31m<Assault Terminator>\033[0m Though their bodies die, their spirit must return to the Chapter."
		<< std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src){
	*this = src;
	std::cout << "\033[1;31m<Assault Terminator>\033[0m * Drop ship has been activated *" << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &rhs){
	(void)rhs;
	return (*this);
}

ISpaceMarine*		AssaultTerminator::clone() const{
	AssaultTerminator		*ret = new (std::nothrow) AssaultTerminator(*this);
	if (!ret)
	{
		std::cerr << "Cloning of Assault Terminator has failed" << std::endl;
		return (NULL);
	}
	return (ret);
}

void				AssaultTerminator::battleCry() const{
	std::cout << "\033[1;31m<Assault Terminator>\033[0m This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack() const{
	std::cout << "\033[1;31m<Assault Terminator>\033[0m * does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack() const{
	std::cout << "\033[1;31m<Assault Terminator>\033[0m * attacks with chainfists *" << std::endl;
}
