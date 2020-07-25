/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 18:04:12 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 18:04:13 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.class.hpp"

int		Animal::_numOfAnimals = 0;
void	Animal::SetAll(std::string name, double height, double weight){
	this->_name = name;
	this->_weight = weight;
	this->_height = height;
	Animal::_numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight){
	this->_name = name;
	this->_weight = weight;
	this->_height = height;
	Animal::_numOfAnimals++;
}

Animal::Animal(){
	this->_name = "";
	this->_weight = 0;
	this->_height = 0;
	Animal::_numOfAnimals++;
}	

Animal::~Animal(){
	/* std::cout << "Animal " << this->_name << " DESTROYED\n"; */
}

void Animal::ToString(){
	std::cout << this->_name << " is " << this->_height <<
		" cms tall and " <<  this->_weight << " kg in weight\n";
}
