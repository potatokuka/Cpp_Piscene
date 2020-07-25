/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 09:25:15 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 09:25:16 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

#include "Database.class.hpp"

int		main(void){
	Database	db;

	std::cout << "Welcome to the Hell >>" << std::endl;

	std::string command = "";
	while (command.compare("EXIT") != 0)
	{
		std::cout << "\033[1;31mRed Pages> \033[0m";
		std::getline(std::cin, command);

		if (command.compare("ADD") == 0)
		{
			// check if phonebook is full
			if (db.Count() >= 8)
			{
				std::cout << "Error: Sorry this level of Hell can not hold more than 8 souls"
						<< std::endl;
				continue;
			}
			// if not full start filling new Contact
			Contact c;
			
			c.Prompt();
			db.AddContact(c);
		}
		else if (command.compare("SEARCH") == 0)
		{
			std::cout << "Souls: " << db.Count() << std::endl;
			db.List();
			if (db.Count() == 0)
				continue;
			std::string input; 
			int	index = -1;
			while (true)
			{
				std::cout << "Enter an index to view: ";
				std::getline(std::cin, input);
				if (!std::cin.good())
					exit(0);
				std::stringstream convert(input);
				if (convert >> index && index >= 0 && index < db.Count())
					break;
				std::cout << "Error: invalid index. Must be between 0 -> "
					<< (db.Count() - 1) << "." << std::endl;
			}
			std::cout << std::endl;
			db.GetContact(index).Display();
		}
	}
	return (0);
}
