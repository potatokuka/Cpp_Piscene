/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:52:03 by greed         #+#    #+#                 */
/*   Updated: 2020/08/05 21:40:33 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stddef.h>
#include "Squad.class.hpp"

Squad::Squad():
	_count(0), _units(NULL)
{}

Squad::~Squad(){
	for (int i = 0; i < _count; ++i)
		delete _units[i];
	delete [] _units;
}

Squad::Squad(Squad const &src):
	_count(src.getCount())
{
	ISpaceMarine	**_units = new (std::nothrow) ISpaceMarine *[_count];
	if (!_units)
	{
		std::cerr << "Allocation failed in squad copy construction" << std::endl;
		_count = 0;
		return ;
	}
	for (int i = 0; i < _count; ++i)
	{
		_units[i] = src.getUnit(i)->clone();
		if (!_units[i])
		{
			std::cerr << "Allocation failed in squad copy construction" << std::endl;
			while (i > 0)
			{
				--i;
				delete _units[i];
			}
			delete[] _units;
			_units = NULL;
			_count = 0;
			return ;
		}
	}
}

Squad		&Squad::operator=(Squad const &rhs){
	for (int i = 0; i < getCount(); ++i)
		delete _units[i];
	delete[] _units;

	ISpaceMarine		**_units = new(std::nothrow) ISpaceMarine *[rhs.getCount()];
	if (!_units)
	{
		std::cerr << "Allocation failed in squad assignment" << std::endl;
		_count = 0;
		return (*this);
	}
	for (int i = 0; i < getCount(); ++i)
	{
		_units[i] = rhs.getUnit(i)->clone();
		if (!_units[i])
		{
			std::cerr << "Allocation failed in squad assignment" << std::endl;
			while (i > 0)
			{
				--i;
				delete _units[i];
			}
			delete[] _units;
			_units = NULL;
			_count = 0;
			return (*this);
		}
	}
	return (*this);
}

int				Squad::getCount() const{
	return (_count);
}

ISpaceMarine*	Squad::getUnit(int index) const{
	if (index < 0 || index >= _count)
		return (NULL);
	return _units[index];
}

int				Squad::push(ISpaceMarine *unit){
	if (!unit)
		return (_count);
	for (int i = 0; i < _count; ++i)
	{
		if (_units[i] == unit)
			return _count;
	}
	// push a new unit onto top of stack of units
	ISpaceMarine	**new_units = new(std::nothrow) ISpaceMarine *[_count + 1];
	if (!new_units)
	{
		std::cerr << "Failed to allocate pushed squad" << std::endl;
		return (_count);
	}
	for (int i = 0; i < _count; ++i)
		new_units[i] = _units[i];
	delete[] _units;
	_units = new_units;
	_units[_count] = unit;
	++_count;
	return (_count);
}
