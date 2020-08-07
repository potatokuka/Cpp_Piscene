/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.class.cpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:52:07 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:05:07 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.class.hpp"

TacticalMarine::TacticalMarine(){
	std::cout << "\033[1;33m<Tactical Marine>\033[0m Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "\033[1;33m<Tactical Marine>\033[0m Aaaargh..."
		<< std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src){
	*this = src;
	std::cout << "\033[1;33m<Tactical Marine>\033[0m Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &rhs){
	(void)rhs;
	return (*this);
}

ISpaceMarine*		TacticalMarine::clone() const{
// if you do not no throw it will not enter the !ret
	TacticalMarine		*ret = new (std::nothrow) TacticalMarine(*this);
	if (!ret)
	{
		std::cerr << "Cloning of Tactical Marine has failed" << std::endl;
		return (NULL);
	}
	return (ret);
}

void				TacticalMarine::battleCry() const{
	std::cout << "\033[1;33m<Tactical Marine>\033[0m For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack() const{
	std::cout << "\033[1;33m<Tactical Marine>\033[0m * attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack() const{
	std::cout << "\033[1;33m<Tactical Marine>\033[0m * attacks with a chainsword *" << std::endl;
}
