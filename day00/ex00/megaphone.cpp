/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 17:54:31 by greed         #+#    #+#                 */
/*   Updated: 2020/07/24 17:54:32 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		main(int ac, char **av){
	if (ac <= 1)
	{
		std::cout << "* LOUND AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (size_t j = 0; j < str.size(); j++)
		{
			str.at(j) = std::toupper(str.at(j));
		}
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
