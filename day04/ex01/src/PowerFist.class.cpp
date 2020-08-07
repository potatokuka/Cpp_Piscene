/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:29 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 11:39:27 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.class.hpp"

PowerFist::PowerFist() :
	AWeapon("PowerFist", 8, 50){}

PowerFist::~PowerFist(){}

PowerFist::PowerFist(PowerFist const &src) :
	AWeapon(src){}

PowerFist			&PowerFist::operator=(const PowerFist &rhs){
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

void				PowerFist::attack() const{
	std::cout << "\033[1;31m*psccccchhhhhhh.... SBLAAAAAAAAAM *\033[0m" << std::endl;
}
