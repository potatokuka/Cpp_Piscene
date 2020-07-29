/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:07:24 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 14:35:59 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "NinjaTrap.class.hpp"
#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

NinjaTrap::NinjaTrap(const std::string _name) :
	ClapTrap(_name, 60, 60, 120, 120, 1, 60, 5, 0, 60){
		std::cout << std::endl <<
			"\033[1;34m<N1NJ4-TP>\033[0m 'No senpai, this is our fight.'" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &rhs) :
	ClapTrap(rhs){
		std::cout << "\033[1;34m<N1NJ4-TP>\033[0m I am a GUNDUMMMMM!" << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << std::endl << "\033[1;34m<N1NJ4-TP>\033[0m 'People die when they are killed.'"
		<< std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target){
	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m 'The wind... Is troubled today.' " <<
		", " << this->_name << "directs the power of the wind at "
		<< target << " dealing *" << this->_rangedDmg << "* of wind from range!"
		<< std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target){
	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m 'Nothing personal kid!' "
			<< this->_name << " pulls out Coldsteel the Edgehog and hits "
		<< target << " dealing *" << this->_meleeDmg << "* of melee damage!" << std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount){
	std::cout
		<< "\033[1;34m<N1NJ4-TP>\033[0m 'It wasn't me who was wrong. It was the world!'"
		<< std::endl;
	(amount >= this->_armor) ? (amount -= this->_armor) : 0;
	
	// do dmg calcualtion on current hp if it's more than hp pool set hp pool to 0
	(this->_health >= amount) ? (this->_health -= amount) : (this->_health = 0);
	this->curr_hp = this->_health;

	std::cout << ">" << this->_name << "< has taken " << amount <<
		" of damage and has (" << this->_health << ") left." << std::endl; 
}

void	NinjaTrap::beRepaired(unsigned int amount){
	(amount + this->_health > this->_maxHealth) ? (this->_health = this->_maxHealth) :
		(this->_health += amount);
	this->curr_hp = this->_health;

	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m 'Cut yourself to fit the world, "
		<< "or cut the world to fit you.' "
		<< this->_name << " heals himself for "
		<< amount << " through the power of pure edginess and has "
		<< this->_health << " left." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target){
	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m Box Box! *SHOEBOX*" << std::endl;
	std::cout << " 'Oh, wait you're... " << target.getName() <<
		" ...not, ME?'" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target){
	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m Box Box! *SHOEBOX*" << std::endl;
	std::cout << " 'Oh, wait you're... " << target.getName() <<
		" ... <CL4P-TP> ?'" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target){
	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m Box Box! *SHOEBOX*" << std::endl;
	std::cout << " 'Oh, wait you're... " << target.getName() <<
		" ... <FR4G-TP> ?'" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target){
	std::cout << "\033[1;34m<N1NJ4-TP>\033[0m Box Box! *SHOEBOX*" << std::endl;
	std::cout << " 'Oh, wait you're... " << target.getName() <<
		" ... <SC4V-TP> ?'" << std::endl;
}
