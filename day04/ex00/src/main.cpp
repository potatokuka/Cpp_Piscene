/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:01:34 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:40:26 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

#include "Peon.class.hpp"
#include "Victim.class.hpp"
#include "Sorcerer.class.hpp"

int		main(){
	Sorcerer	robert("Robert", "the Magnifient");

	Victim		jim("Jimmy");
	Victim		jimCopy(jim);
	Peon		joe("Joe");
	Peon		joeCopy(joe);
	Victim		&ref_joe(joe);

	std::cout << "\033[1;34m-- Overload Output --\033[0m" << std::endl;
	std::cout << robert << jim << jimCopy << joe
		<< joeCopy << ref_joe;

	std::cout << "\033[1;34m-- POLY --\033[0m" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(jimCopy);
	robert.polymorph(joe);
	robert.polymorph(joeCopy);
	robert.polymorph(ref_joe);
	std::cout << "\033[1;34m-- END --\033[0m" <<  std::endl;

	return (0);
}
