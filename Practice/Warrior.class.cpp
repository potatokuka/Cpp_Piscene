/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warrior.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 18:50:28 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 18:50:29 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.class.hpp"

int		Warrior::_numOfAnimals = 0;
void	Warrior::SetAll(std::string name, int health, int attack, int block){
	this->_name = name;
	this->_health = health;
	this->_attack = attack;
	this->_block = block;
	Warrior::_numOfFighters++;
}

Warrior::Warrior(std::string name, int health, int attack, int block){
	this->_name = name;
	this->_health = health;
	this->_attack = attack;
	this->_block = block;
	Warrior::_numOfFighters++;
}

Warrior::Warrior(){
	this->_name = "";
	this->_health = 0;
	this->_attack = 0;
	this->_block = 0;
	Warrior::_numOfFighters++;
}

Warrior::~Warrior(){
	std::cout << "WARRIOR " << this->_name << " DESTROYED\n";
}
