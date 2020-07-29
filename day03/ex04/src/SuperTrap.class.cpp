/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:51:56 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 16:51:42 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "SuperTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

SuperTrap::SuperTrap(const std::string _name) :
	ClapTrap(_name, 100, 100, 120, 120, 1, 60, 20, 5, 100),
	FragTrap(_name), NinjaTrap(_name)
{
		std::cout << "\033[1;34m<SUP3R-TP>\033[0m Hello, it is I, DA SUPA!" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const &target){
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const &target){
	FragTrap::rangedAttack(target);
}

SuperTrap::SuperTrap(const SuperTrap &rhs) :
	FragTrap(rhs), NinjaTrap(rhs)
{
		std::cout << "\033[1;34m<SUP3R-TP>\033[0m RUSH B RUSH B!" << std::endl;
}

SuperTrap::~SuperTrap(){
	std::cout <<  "\033[1;34m<SUP3R-TP>\033[0m Oh mama mia, they done got me!" << std::endl;
}

void	SuperTrap::takeDamage(unsigned int amount){
	std::cout
		<< "\033[1;34m<SUP3R-TP>\033[0m 'Ouchi Ouchi that hurts Mister!'"
		<< std::endl;
	(amount >= this->_armor) ? (amount -= this->_armor) : 0;
	
	// do dmg calcualtion on current hp if it's more than hp pool set hp pool to 0
	(this->_health >= amount) ? (this->_health -= amount) : (this->_health = 0);
	this->curr_hp = this->_health;

	std::cout << ">" << this->_name << "< has taken " << amount <<
		" of damage and has (" << this->_health << ") left." << std::endl; 
}

void	SuperTrap::beRepaired(unsigned int amount){
	(amount + this->_health > this->_maxHealth) ? (this->_health = this->_maxHealth) :
		(this->_health += amount);
	this->curr_hp = this->_health;

	std::cout << "\033[1;34m<SUP3R-TP>\033[0m 'whelp now i feel better! "
		<< "At least a little bit.' "
		<< this->_name << " heals himself for "
		<< amount << " through the power being DA SUPA and has "
		<< this->_health << " left." << std::endl;
}
