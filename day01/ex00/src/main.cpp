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
#include <iomanip>

#include "Pony.class.hpp"

void	ponyOnTheHeap(void){
	std::cout << "This be on the HEAP yo!\n";
	Pony *fred = new Pony("Fred", "Black", 8);
	fred->ToString();
	delete fred;
	return ;
}

void	ponyOnTheStack(void){
	std::cout << std::setw(44) << std::setfill('.') << '.' << std::endl;
	std::cout << "We are in the Lovely land o' stack" << std::endl;
	Pony frank;
	frank.ToString();
	return ;
}

int		main(void){
	ponyOnTheHeap();
	std::cout << std::setw(44) << std::setfill('.') << '.' << std::endl;
	std::cout << "Back in Main" << std::endl;
	ponyOnTheStack();
}
