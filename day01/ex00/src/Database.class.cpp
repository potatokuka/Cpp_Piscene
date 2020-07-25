/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Database.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 11:14:05 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 11:14:06 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdio.h>

#include "Database.class.hpp"

Database::Database(void) : _count(0){}
Database::~Database(void) {}

int		Database::Count(void) const{
	return (this->_count);
}

Contact	Database::GetContact(int i) const{
	return (this->_contacts[i]);
}

void	Database::AddContact(Contact c){
	if (this->_count >= 8)
		return ;
	this->_contacts[this->_count++] = c;
	return ;
}

std::string truncate(std::string str, size_t width){
	return( str.substr(0, width) + ".");
}

void	displayField(std::string field){
	// make a field of 9 wide, put inside value, whatever doesnt get
	// filled with char, place in '.' seperate each field by '|'
	if (field.size() > 10)
	{
		std::cout << truncate(field, 9);
		/* std::cout << std::setw(9) << std::setfill('.') << field; */
	}
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << field;

	std::cout << '|';
	return ;
}

void	Database::List(void) const{
	displayField("Index");
	displayField("First Name");
	displayField("Last Name");
	displayField("Nickname");
	std::cout << std::endl;

	// Table seperator
	std::cout << std::setw(44) << std::setfill('-') << '-';
	std::cout << std::endl;

	for(int i = 0; i < this->_count; i++)
	{
		Contact c = this->_contacts[i];
		displayField(std::to_string(i));
		displayField(c.GetField(0));
		displayField(c.GetField(1));
		displayField(c.GetField(2));
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return ;
}
