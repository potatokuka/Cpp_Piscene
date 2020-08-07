/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:53:02 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:53:03 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanB.class.hpp"
#include "Weapon.class.hpp"

HumanB::HumanB(std::string name) : _name(name){}
HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &w){
	this->_weapon = &w;
}

void	HumanB::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
		<< std::endl;
}
