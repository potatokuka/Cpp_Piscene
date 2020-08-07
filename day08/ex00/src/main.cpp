/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:40:50 by greed         #+#    #+#                 */
/*   Updated: 2020/08/04 10:40:51 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <set>
#include "easyfind.class.hpp"

int		main(){
	std::srand(time(NULL));
	std::set<int>s;
	for (int i = 1; i <= 15; i++)
		s.insert(i);
	for (int i = -5; i <= 25; i++){
		try{
			std::cout << easyfind(s, i) << std::endl;
		}
		catch (std::exception &e){
			std::cout << "Unable to find: " << i << std::endl;
		}
	}
	std::cout << "\033[1;31mRANDOM NUMBERS\033[m" << std::endl;
	for (int i = 1; i <= 10; i++){
		int randNum = (std::rand() % 25);
		s.insert(randNum);
	}
	for (int i = 0; i <= 15; i++){
		try{
			int randNum = (std::rand() % 25);
			std::cout << "Try " << i << " " << easyfind(s, randNum) << std::endl;
		}
		catch (std::exception){
			std::cout << "Unable to find match for try: " << i << std::endl;
		}
	}
}
