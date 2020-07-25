/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 18:11:22 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 18:11:23 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Animal.class.hpp"
#include "Warrior.class.hpp"

int	main(){
	Animal	fred;
	fred.ToString();
	fred.SetHeight(33);
	fred.SetWeight(10);
	fred.SetName("Fred");
	fred.ToString();
	Animal tom("Tom", 36, 15);
	tom.ToString();
	std::cout << std::setw(44) << std::setfill('_') << "\n";
	srand(time(NULL));
	Warrior thor("Thor", 100, 30, 15);
	Warrior hulk("HULK", 135, 35, 10);

	Battle::StartFight(thor, hulk);
	return (0);
}
