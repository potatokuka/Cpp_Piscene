/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:16 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:17 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stddef.h>
#include "Character.class.hpp"
#include "Enemy.class.hpp"

Character::Character(){}

Character::Character(std::string const &name) :
	 _ap(40), _aweapon(NULL), _name(name){}

Character::~Character(){}

Character			&Character::operator=(Character const &rhs){
	if (this != &rhs)
	{
		_name = rhs._name;
		_ap = rhs._ap;
		_aweapon = rhs._aweapon;
	}
	return (*this);
}

void				Character::recoverAP(){
	(_ap += 10 > 40) ? _ap = 40 : _ap += 10;
}

void				Character::equip(AWeapon *aweapon){
	_aweapon = aweapon;
}

void				Character::attack(Enemy *enemy){
	if (enemy == NULL || _aweapon == NULL)
		return ;
	if (_ap < _aweapon->getAPCost())
	{
		// TODO add text for failure ?
		std::cout << "Need to recharge, hold the line!" << std::endl;
		return ;
	}
	((_ap - _aweapon->getAPCost()) < 0) ? _ap = 0 : _ap -= _aweapon->getAPCost();
	std::cout << getName() << " attacks " << enemy->getType()
		<< " with a " << _aweapon->getName() << std::endl;
	_aweapon->attack();
	enemy->takeDamage(_aweapon->getDamage());
	std::cout << enemy->getType() << " has taken <" << _aweapon->getDamage() <<
		"> of damage and has (" << enemy->getHP() << ") hp remaining." << std::endl;
	if (enemy->getHP() <= 0)
		delete enemy;
}

// GETTERS

std::string const	&Character::getName() const{
	return (_name);
}

int					Character::getAP() const{
	return (_ap);
}

AWeapon					*Character::getWeapon() const{
	return (_aweapon);
}

std::ostream			&operator<<(std::ostream &o, const Character &rhs){
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and weilds a "
			<< rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}
