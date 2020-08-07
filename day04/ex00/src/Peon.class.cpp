/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:01:37 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:13:22 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

Peon::Peon(){
	this->_name = "Thral";
	std::cout << "\033[4;31mPEON\033[0m Zog Zog." << std::endl;
}

Peon::Peon(std::string _name){
	this->_name = _name;
	std::cout << "\033[4;31mPEON\033[0m Zog Zog." << std::endl;
}

Peon::Peon(const Peon &src){
	*this = src;
}

Peon::~Peon(){
	std::cout << "\033[4;31mPEON\033[0m Bleuark..." << std::endl;
}

Peon			&Peon::operator=(const Peon &rhs){
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void			Peon::getPolymorphed() const{
	std::cout << "\033[4;31mPEON\033[0m " <<this->_name << " has been turned into a pink pony!"
		<< std::endl;
}
