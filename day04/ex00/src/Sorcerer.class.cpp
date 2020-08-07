/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 12:42:08 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:15:05 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(){
	this->_name = "Gandalf";
	this->_title = "the Grey";
	std::cout << "\033[4;32mSORCERER\033[0m "<< this->_name << ", " << this->_title << ", is born!"
		<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src){
	*this = src;
}

Sorcerer::Sorcerer(std::string _name, std::string _title){
	this->_name = _name;
	this->_title = _title;
	std::cout << "\033[4;32mSORCERER\033[0m "<< this->_name << ", " << this->_title << ", is born!"
		<< std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout << "\033[4;32mSORCERER\033[0m "<< this->_name << ", " << this->_title \
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Sorcerer &rhs){
	o << "\033[4;32mSORCERER\033[0m I am " << rhs.getName() << ", " << rhs.getTitle() \
		<< ", and I like ponies!" << std::endl;
	return (o);
}

void			Sorcerer::setName(std::string _name){
	this->_name = _name;
}

void			Sorcerer::setTitle(std::string _title){
	this->_title = _title;
}

void			Sorcerer::polymorph(const Victim &victim) const{
	return (victim.getPolymorphed());
}

/*
**	GETTERS
*/

std::string		Sorcerer::getName() const{
	return (this->_name);
}

std::string		Sorcerer::getTitle() const{
	return (this->_title);
}
