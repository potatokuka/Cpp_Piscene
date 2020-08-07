/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.class.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 10:21:08 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 10:21:09 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.class.hpp"
#include "ZombieEvent.class.hpp"

ZombieEvent::ZombieEvent(void) {}
ZombieEvent::~ZombieEvent(void) {}

std::string ZombieEvent::_names[10] = {
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

Zombie		*ZombieEvent::newZombie(std::string name) const{
	return (new Zombie(name, this->_type));
}

void		ZombieEvent::randomChump(void) const{
	Zombie rando = Zombie(ZombieEvent::_names[std::rand() % 10], this->_type);
}
