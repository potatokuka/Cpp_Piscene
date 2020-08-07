/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:52:58 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:52:59 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanA.class.hpp"
#include "Weapon.class.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), _weapon(w) {}
HumanA::~HumanA(){}

void	HumanA::attack() const{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
		<< std::endl;
}
