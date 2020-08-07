/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:21:29 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:21:30 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

#include "Brain.class.hpp"

Brain::Brain(){}
Brain::~Brain(){}

std::string	Brain::identify() const{
	std::stringstream oss;
	oss << (void *)this;
	return (oss.str());
}
