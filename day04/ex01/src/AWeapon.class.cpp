/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Aweapon.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:12 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:13 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"

AWeapon::AWeapon(){}

AWeapon::AWeapon(std::string const &_name, int _apcost, int _damage) :
	_damage(_damage), _apcost(_apcost), _name(_name){}

AWeapon::~AWeapon(){}

//copy
AWeapon::AWeapon(AWeapon const &src){
	*this = src;
}
// assignation
AWeapon		&AWeapon::operator=(const AWeapon &rhs){
	if (this != &rhs)
	{
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
		this->_name = rhs._name;
	}
	return (*this);
}

// GETTERS

int					AWeapon::getAPCost() const{
	return (this->_apcost);
}

int						AWeapon::getDamage() const{
	return (this->_damage);
}

const std::string		AWeapon::getName() const{
	return (this->_name);
}
