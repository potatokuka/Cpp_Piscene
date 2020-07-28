/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 00:26:49 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 00:46:11 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(const std::string _name, unsigned int _health,
	unsigned int _maxHealth, unsigned int _energy, unsigned int _maxEnergy,
	unsigned int _level, unsigned int _meleeDmg, unsigned int _rangedDmg,
	unsigned int _armor) : 
	_name(_name), _health(_health), _maxHealth(_maxHealth), _energy(_energy),
	_maxEnergy(_maxEnergy), _level(_level), _meleeDmg(_meleeDmg), _rangedDmg(_rangedDmg),
	_armor(_armor)
{
	std::cout << "'*Clap* *Clap* <CL4P-TP> is HERE!' <" << this->_name <<
		"> has entered." << "'Now time to Clap Back!'" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) :
	_name(rhs._name), _health(rhs._health), _maxHealth(rhs._maxHealth), _energy(rhs._energy),
	_maxEnergy(rhs._maxEnergy), _level(rhs._level), _meleeDmg(rhs._meleeDmg),
	_rangedDmg(rhs._rangedDmg), _armor(rhs._armor)
{
	std::cout << "'*Clap* *Clap* <CL4P-TP> is HERE!' <" << this->_name <<
		"> has entered." << "'Now time to Clap Back!'" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "PAPA PAPA <CL4P-TP> " << this->_name <<
		"I can see the light! " << "I dont wanna go PAPA" << std::endl;
}

/* void	ClapTrap::rangedAttack(std::string const &target){ */
/* 	std::cout << "<CL4P-TP> 'You spoony bard!' " << this->_name << */
/* 		target << " dealing *" << this->_rangedDmg << "* with a Ninja Star!" */
/* 		<< std::endl; */
/* } */

/* void	ClapTrap::meleeAttack(std::string const &target){ */
/* 	std::cout << "<CL4P-TP> 'That's not just a flesh wound!' " */
/* 		<< this->_name << " attacks with Fuzzy Pickles!" */
/* 		<< target << " dealing *" << this->_meleeDmg << "* of melee damage!" << std::endl; */
/* } */

/* void	ClapTrap::takeDamage(unsigned int amount){ */
/* 	std::cout << "<CL4P-TP> 'Stay behind me Mr. President!'" << std::endl; */
/* 	/1* this->_health = this->curr_hp; *1/ */
/* 	(amount >= this->_armor) ? (amount -= this->_armor) : 0; */
	
/* 	// do dmg calcualtion on current hp if it's more than hp pool set hp pool to 0 */
/* 	(this->_health >= amount) ? (this->_health -= amount) : (this->_health = 0); */
/* 	this->curr_hp = this->_health; */

/* 	std::cout << ">" << this->_name << "< has taken " << amount << */
/* 		" of damage and has (" << this->_health << ") left." << std::endl; */ 
/* } */

/* void	ClapTrap::beRepaired(unsigned int amount){ */
/* 	(amount + this->_health > this->_maxHealth) ? (this->_health = this->_maxHealth) : */
/* 		(this->_health += amount); */
/* 	this->curr_hp = this->_health; */

/* 	std::cout << "<CL4P-TP> 'The President has been kidnapped by ninjas.' " */
/* 		<< this->_name << " Has the power of patriotism and heals" */
/* 		<< amount << " of damage, and has " */
/* 		<< this->_health << " left. We must be bad enough to rescue!" << std::endl; */
/* } */
