/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:21:45 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:21:46 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.class.hpp"
#include "Human.class.hpp"

int		main(){
	Human	bob;

	std::cout << "Human:Bob ID:\t\t " << bob.identify() << std::endl;
	std::cout << "Human:Bob: Brain ID:\t " <<  bob.getBrain().identify()
			<< std::endl;
}
