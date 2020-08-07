/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:53:08 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:53:09 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Weapon.class.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon(){}

const std::string Weapon::getType() const{
	return (this->_type);
}
