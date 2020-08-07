/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 11:49:56 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 11:50:15 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.class.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(void){
	std::cout << "-" << this->_name << " *" << this->_type << 
		"*_ Has taken an arrow to the knee." << std::endl;
}

void		Zombie::announce(void) const{
	std::cout << "-" << this->_name << " *" << this->_type << 
		"*_ With such confusion, don't it make you wanna scream?." << std::endl;
}
