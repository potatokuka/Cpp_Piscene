/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 00:26:49 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 11:13:04 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(const std::string _name, unsigned int _health,
	unsigned int _maxHealth, unsigned int _energy, unsigned int _maxEnergy,
	unsigned int _level, unsigned int _meleeDmg, unsigned int _rangedDmg,
	unsigned int _armor, unsigned int curr_hp) : 
	_name(_name), _health(_health), _maxHealth(_maxHealth), _energy(_energy),
	_maxEnergy(_maxEnergy), _level(_level), _meleeDmg(_meleeDmg), _rangedDmg(_rangedDmg),
	_armor(_armor), curr_hp(curr_hp)
{
	std::cout << std::endl << "'*Clap* *Clap* \033[1;36m<CL4P-TP>\33[0m is HERE!' <"
		<< this->_name << "> has entered." << "'Now time to Clap Back!'" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) :
	_name(rhs._name), _health(rhs._health), _maxHealth(rhs._maxHealth), _energy(rhs._energy),
	_maxEnergy(rhs._maxEnergy), _level(rhs._level), _meleeDmg(rhs._meleeDmg),
	_rangedDmg(rhs._rangedDmg), _armor(rhs._armor), curr_hp(rhs.curr_hp)
{
	std::cout << "'*Clap* *Clap* \033[1;36m<CL4P-TP>\33[0m is HERE!' <" << this->_name <<
		"> has entered." << "'Now time to Clap Back!'" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "PAPA PAPA \033[1;36m<CL4P-TP>\33[0m " << this->_name <<
		" I can see the light! " << "I dont wanna go PAPA" << std::endl;
}

std::string	ClapTrap::getName() const{
	return (this->_name);
}
