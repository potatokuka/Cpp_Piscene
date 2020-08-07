/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:37 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 11:36:43 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant() :
	Enemy(170, "\033[4;37mSuper Mutant\033[0m"){
		std::cout << this->_type <<  " MUST, SMASH, ME WANT TO SMASH HEADS!" << std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout << this->_type << " *Willhelm scream*" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) :
	Enemy(src){}

SuperMutant			&SuperMutant::operator=(const SuperMutant &rhs){
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_type = rhs._type;
	}
	return (*this);
}

void				SuperMutant::takeDamage(int damage){
	Enemy::takeDamage(damage - 3);
}
