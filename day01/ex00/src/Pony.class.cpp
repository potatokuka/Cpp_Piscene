/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 21:49:19 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 21:49:20 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"
#include <iostream>

void	Pony::SetAll(std::string name, std::string color, int age){
	this->_name = name;
	this->_color = color;
	this->_age = age;
}

Pony::Pony(std::string name, std::string color, int age){
	this->_name = name;
	this->_color = color;
	this->_age = age;
}

Pony::Pony(){
	this->_name = "Sir Stacks Alot";
	this->_color = "Red";
	this->_age = 4;
}

Pony::~Pony(){
	std::cout << "This Pony " << this->_name << " has been sent out to pasture\n";
}

void	Pony::ToString(){
	std::cout << this->_name << " is a pony a nice " << this->_color <<
		" pony at the ripe age of " << this->_age << std::endl;
}
