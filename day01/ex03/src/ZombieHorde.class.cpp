/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 11:54:04 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 11:54:05 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.class.hpp"
#include "ZombieHorde.class.hpp"

ZombieHorde::ZombieHorde(int n) : _numOfZombies(n){
	this->_zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		_zombies[i].SetType(ZombieHorde::_types[std::rand() % MAX_TYPE]);
		_zombies[i].SetName(ZombieHorde::_names[std::rand() % MAX_NAME]);
	}
}

ZombieHorde::~ZombieHorde(void){
	delete [] this->_zombies;
}

void	ZombieHorde::announce() const{
	for(int i = 0; i < this->_numOfZombies; i++)
		_zombies[i].announce();
	return ;
}

std::string	ZombieHorde::_types[MAX_TYPE] = {
	"boomer",
	"zoomer",
	"cooker",
	"shooker",
};

std::string ZombieHorde::_names[MAX_NAME] = {
	"Brain McBrains",
	"Peter Peterpeterson",
	"Michael Jackson",
	"Alice Cooper",
	"Rich Poorman",
	"Isthis Randomenough",
	"Rando Rambo",
	"Rick Dickerson",
	"Potato Kuka",
	"Mr. Meowgi",
};
