/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:34:18 by greed         #+#    #+#                 */
/*   Updated: 2020/07/28 21:44:38 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"

FragTrap::FragTrap(const std::string name) :
	ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "-BEEP BOOP- FR4G-TP <" << this->_name << "> has been ACTIVATED!"
		<< " prepare for world domination. Through the power of SPARKLES" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) :
	ClapTrap(rhs)
{
	std::cout << "-BEEP BOOP- FR4G-TP <" << this->_name << "> has been ACTIVATED!"
		<< " prepare for world domination. Through the power of SPARKLES" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "*sputter *sputter FR4G-TP " << this->_name <<
		" sheen has gone dull, it was not fabulous enough." << " Go on without me brothers!"
		<< std::endl;
}

void	FragTrap::rangedAttack(std::string const &target){
	std::cout << "FR4G-TP 'As I take your hand and lead you to the dance floor' " <<
		", " << this->_name << " grabs a robot handful of glitter and hurls it at "
		<< target << " dealing *" << this->_rangedDmg << "* of damage from range!"
		<< std::endl;
}

void	FragTrap::meleeAttack(std::string const &target){
	std::cout << "FR4G-TP 'So I'm never gonna dance again' " << this->_name <<
		" raises their guilty feet without any rythm, and attacks " << target
		<< " dealing *" << this->_meleeDmg << "* of melee damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	std::cout << "FR4G-TP I should've known better than to cheat a friend!" << std::endl;
	/* this->_health = this->curr_hp; */
	(amount >= this->_armor) ? (amount -= this->_armor) : 0;
	
	// do dmg calcualtion on current hp if it's more than hp pool set hp pool to 0
	(this->_health >= amount) ? (this->_health -= amount) : (this->_health = 0);
	this->curr_hp = this->_health;

	std::cout << ">" << this->_name << "< has taken " << amount <<
		" of damage and has (" << this->_health << ") left." << std::endl; 
}

void	FragTrap::beRepaired(unsigned int amount){
	(amount + this->_health > this->_maxHealth) ? (this->_health = this->_maxHealth) :
		(this->_health += amount);
	this->curr_hp = this->_health;

	std::cout << "FR4G-TP 'There's no comfort in the truth, Pain is all you'll find' "
		<< this->_name << " took a large swig of Champagne and is feeling better. "
		<< amount << " better exactly, with a total of " << this->_health <<
		" left. The dance must go on!" << std::endl;
}

std::string	FragTrap::_vaulThunter[MAX_QUOTES] = {
	"As the music dies, something in your eyes",
	"Calls to mind a silver screen",
	"And all its sad good-byes",
	"Though it's easy to pretend, I know you're not a fool",
	"So I'm never gonna dance again, The way I danced with you",
	"Time can never mend The careless whispers of a good friend",
	"You can dance, You can jive",
	"Having the time of your life, Ooh, see that girl",
	"Watch that scene, Digging the dancing queen",
	"You are the dancing queen, Young and sweet",
	"Only seventeen, Dancing queen",
};

void	FragTrap::vaulthunter_dot_exe(std::string const &target){
	if (this->_energy < 25)
	{
		std::cout << "'Billy! Billy! Go find Papa's good stuff, we MUST keep the "
			<< "party going!" << std::endl;
		return ;
	}
	this->_energy -= 25;
	std::cout << "FR4G-TP uses " << FragTrap::_vaulThunter[std::rand() % MAX_QUOTES]
		<<  " For extra GLITTER from the power of vaulthunter.exe, on " << target
		<< " it's SUPER effective!" << std::endl;
}
