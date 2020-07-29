/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 22:57:09 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 11:17:46 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"

ScavTrap::ScavTrap(const std::string name) :
	ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, 100)
{
	std::cout << std::endl << "'I did not hit her. I did noooot' \033[1;33m<SC4V-TP>\033[0m <"
		<< this->_name << "> has entered." << " 'Oh hi Mark!'" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) :
	ClapTrap(rhs)
{
	std::cout << "'I did not hit her. I did noooot' \033[1;33m<SC4V-TP>\033[0m <" << this->_name <<
		"> has entered." << " 'Oh hi Mark!'" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "*cough *cough \033[1;33m<SC4V-TP>\033[0m " << this->_name <<
		" Why, Lisa, why, WHY?!" << " 'YOU'RE TEARING ME APART, LISA!'" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target){
	std::cout << "\033[1;33m<SC4V-TP>\033[0m 'Hey you guys wanna play some football?' " <<
		", " << this->_name << "lobs a football around in a triangle"
		<< target << " dealing *" << this->_rangedDmg << "* of cringe from range!"
		<< std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target){
	std::cout << "\033[1;33m<SC4V-TP>\033[0m 'Chicken, Peter, you're just a little chicken' "
			<< this->_name << " attacks with the power of Loud Noises!"
		<< target << " dealing *" << this->_meleeDmg << "* of melee damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	std::cout << "\033[1;33m<SC4V-TP>\033[0m 'Everybody betrayed me!'" << std::endl;
	/* this->_health = this->curr_hp; */
	(amount >= this->_armor) ? (amount -= this->_armor) : 0;
	
	// do dmg calcualtion on current hp if it's more than hp pool set hp pool to 0
	(this->_health >= amount) ? (this->_health -= amount) : (this->_health = 0);
	this->curr_hp = this->_health;

	std::cout << ">" << this->_name << "< has taken " << amount <<
		" of damage and has (" << this->_health << ") left." << std::endl; 
}

void	ScavTrap::beRepaired(unsigned int amount){
	(amount + this->_health > this->_maxHealth) ? (this->_health = this->_maxHealth) :
		(this->_health += amount);
	this->curr_hp = this->_health;

	std::cout << "\033[1;33m<SC4V-TP>\033[0m 'You're my favourite customer. Thanks a lot bye!' "
		<< this->_name << " is in love with Lisa. Johnny heals "
		<< amount << " through the power of love feeling better with "
		<< this->_health << " left. The dance must go on!" << std::endl;
}

std::string	ScavTrap::_challenges[MAX_CHALLENGE] = {
	"In a few minutes, B****",
	"I am no a demon, I am a lizard.",
	"Put the bunny back in the box.",
	"My name's Roger. Two Rogers dont make a right!",
	"There's only two men I trust. One of them's me. The other's not you.",
	"You dont have a lucky crack pipe?",
	"Shoot him again... His soul's still dancing.",
	"Uh... You wanna know who really killed JFK?",
	"Release the baby!",
	"I love pressure. I eat it for breakfast.",
	"I never disrobe before gunplay.",
};

void	ScavTrap::challengeNewcomer(std::string const &target){
	if (this->_energy < 25)
	{
		std::cout << "BEE'S BEE'S IT'S ALWAYS THE BEE'S!"
			<< " get them off of me, I can't breathe!" << std::endl;
		return ;
	}
	this->_energy -= 25;
	std::cout << "\033[1;33m<SC4V-TP>\033[0m takes a sip and prepares for slam poetry! "
		<< ScavTrap::_challenges[std::rand() % MAX_CHALLENGE]
		<<  " the crowd is STUNNED " << target
		<< " is breathless due to the beauty of " << this->_name
		<< " 's words!"<< std::endl;
}
