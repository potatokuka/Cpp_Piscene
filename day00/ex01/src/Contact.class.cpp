/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 10:56:57 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 10:56:58 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

std::string Contact::_fieldNames[FIELD_COUNT] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"Email address",
	"Phone number",
	"Birthday date",
	"Favorite Meal",
	"Underwear color",
	"Darkest secret",
};

int			Contact::FindField(std::string field){
	for (int i = 0; i < FIELD_COUNT; i++)
	{
		if (field.compare(Contact::_fieldNames[i]) == 0)
			return (i);
	}
	return (-1);
}

void		Contact::SetField(int i, std::string value){
	this->_fields[i] = value;
	return;
}

std::string	Contact::GetField(int i) const{
	return (this->_fields[i]);
}

void		Contact::Prompt(void){
	std::cout << "Generating new Contact." << std::endl;

	for (int i = 0; i < FIELD_COUNT; i++)
	{
		std::string value = "";
		while (value.compare("") == 0)
		{
			std::cout << (i + 1) << "/" << FIELD_COUNT << " - "
					<< Contact::_fieldNames[i] << ": ";
			std::getline(std::cin, value);
			if (!std::cin.good())
				exit(0);
			if (value.compare("") == 0)
			{
				std::cout << "Error: Input Field can not be empty!" << std::endl;
			}
		}
		this->SetField(i, value);
	}
	return;
}

void		Contact::Display(void) const{
	for (int i = 0; i < FIELD_COUNT; i++)
	{
		std::cout << "- " << Contact::_fieldNames[i] << ": "
				<< this->_fields[i] << std::endl;
	}
	return;
}
