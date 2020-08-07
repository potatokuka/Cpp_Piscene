/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:20:37 by greed         #+#    #+#                 */
/*   Updated: 2020/07/27 15:20:38 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &source) : _value(source.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &grd){
	std::cout << "Assignation operator called" << std::endl;

	this->_value = grd.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" <<
		std::endl;
	this->_value = raw;
}
