/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.class.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:19 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:20 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &src){
	for (int i = 0; i < 4; i++)
	{
		if (!src._inventory[i])
			_inventory[i] = NULL;
		else
			_inventory[i] = src._inventory[i]->clone();
	}
}

MateriaSource		&MateriaSource::operator=(MateriaSource const &rhs){
	if (this == &rhs)
		return (*this);
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

void				MateriaSource::learnMateria(AMateria *m){
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

AMateria			*MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			if (_inventory[i]->getType() == type)
				return (_inventory[i]->clone());
		}
	}
	return (NULL);
}
