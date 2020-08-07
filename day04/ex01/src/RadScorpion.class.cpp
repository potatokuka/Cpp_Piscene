/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:33 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 11:35:38 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.class.hpp"

RadScorpion::RadScorpion() :
	Enemy(80, "\033[4;31mRad Scorpion\033[0m"){
		std::cout << this->_type << " * click click click *" << std::endl;
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH * \033[4;31mRad Scorpion\033[0m has been killed." << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) :
	Enemy(src){}

RadScorpion			&RadScorpion::operator=(const RadScorpion &rhs){
	if (this != &rhs)
	{
		_hp = rhs._hp;
		_type = rhs._type;
	}
	return (*this);
}
