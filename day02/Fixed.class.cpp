/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:07:25 by greed         #+#    #+#                 */
/*   Updated: 2020/07/28 13:07:27 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value){
	std::cout << "Int Constructor Called" << std::endl;
	this->_value = value << Fixed::_fractionalBits;
}

Fixed::Fixed(float const value){
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(value * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(Fixed const &source) : _value(source.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &grd){
	std::cout << "Assignation operator called" << std::endl;
	this->_value = grd.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
}

int 	Fixed::toInt() const{
	return (this->_value >> Fixed::_fractionalBits);
}

float	Fixed::toFloat() const{
	// 								1 * fractionalBits^2
	return (this->_value / (float)(1 << Fixed::_fractionalBits));
}

std::ostream &operator<<(std::ostream &oss, Fixed const &grd){
	oss << grd.toFloat();
	return (oss);
}
