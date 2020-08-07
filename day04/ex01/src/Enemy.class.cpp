/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:20 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:21 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const& type):
	_hp(hp), _type(type){}

Enemy::~Enemy(){}

Enemy::Enemy(Enemy const &src){
	*this = src;
}

Enemy				&Enemy::operator=(const Enemy &rhs){
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

int					Enemy::getHP() const{
	return _hp;
}

std::string const	&Enemy::getType() const{
	return _type;
}

void				Enemy::takeDamage(int damage){
	(_hp - damage <= 0) ? _hp = 0 : _hp -= damage;
}
