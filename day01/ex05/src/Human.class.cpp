/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Haman.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:21:33 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:21:35 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"
#include "Brain.class.hpp"

Human::Human(){}
Human::~Human(){}

const Brain &Human::getBrain() const{
	return (this->_brain);
}

std::string Human::identify() const{
	return (this->_brain.identify());
}
