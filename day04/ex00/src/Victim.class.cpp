/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:01:46 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:16:36 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"

Victim::Victim(){
	this->_name = "Bob";
	std::cout << "\033[4;33mVICTIM\033[0m " << "Some random victim called " << this->_name
		<< " just appeared!" << std::endl;
}

Victim::Victim(std::string _name){
	this->_name = _name;
	std::cout << "\033[4;33mVICTIM\033[0m " << "Some random victim called " << this->_name
		<< " just appeared!" << std::endl;
}

Victim::Victim(const Victim &src){
	*this = src;
}

Victim::~Victim(){
	std::cout << "\033[4;33mVICTIM\033[0m " << "Victim " << this->_name
		<< " just died for no apparent reason!" << std::endl;
}

Victim 			&Victim::operator=(const Victim &rhs){
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Victim &rhs){
	o << "\033[4;33mVICTIM\033[0m " << "I am " << rhs.getName() << ", " << ", and I like otters!"
		<< std::endl;
	return (o);
}

std::string		Victim::getName() const{
	return (this->_name);
}

void			Victim::getPolymorphed() const{
	std::cout << "\033[4;33mVICTIM\033[0m " << this->_name << " has been turned into a "
		<< "cute little sheep!" << std::endl;
}

void			Victim::setName(std::string _name){
	this->_name = _name;
}
