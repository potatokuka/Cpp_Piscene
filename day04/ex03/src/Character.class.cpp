/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:19:58 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:19:59 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "Character.class.hpp"

Character::Character(){}

Character::Character(std::string const &name) :
	_name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

Character::Character(Character const &src):
	_name(src.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == src._inventory[i])
			return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!src._inventory[i])
			_inventory[i] = NULL;
		else
			_inventory[i] = src._inventory[i]->clone();
	}
}

Character			&Character::operator=(Character const &rhs)
{
	if (&rhs == this)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == rhs._inventory[i])
			return (*this);
	}
	_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		if (!rhs._inventory[i])
			_inventory[i] = NULL;
		else
			_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName() const{
	return (_name);
}

void				Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == m)
			return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
