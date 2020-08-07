/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 10:21:03 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 10:21:04 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.class.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	this->Announce();
}

Zombie::~Zombie(void){
	std::cout << "-" << this->_name << " *" << this->_type << 
		"*_ Has taken an arrow to the knee." << std::endl;
}

void		Zombie::Announce(void) const{
	std::cout << "-" << this->_name << " *" << this->_type << 
		"*_ With such confusion, don't it make you wanna scream?." << std::endl;
}
