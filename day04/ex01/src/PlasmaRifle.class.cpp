/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:26 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 11:40:11 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle() :
	AWeapon("PlasmaRifle", 5, 21){}

PlasmaRifle::~PlasmaRifle(){}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) :
	AWeapon(src){}

PlasmaRifle			&PlasmaRifle::operator=(const PlasmaRifle &rhs){
	if (this != &rhs)
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return (*this);
}

void				PlasmaRifle::attack() const{
	std::cout << " \033[1;36m*PEW PEW*\033[0m" << std::endl;
}
