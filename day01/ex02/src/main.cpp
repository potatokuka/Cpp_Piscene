/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 10:21:01 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 10:21:02 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.class.hpp"
#include "ZombieEvent.class.hpp"

int		main(){
	ZombieEvent	event;

	event.setZombieType("Thriller");
	Zombie	*zombie = event.newZombie("Slowpoke");
	Zombie	*zombie1 = event.newZombie("Ricki Roller");

	event.setZombieType("chump");
	for (int i = 0; i < 8; i++)
		event.randomChump();
	delete zombie;
	delete zombie1;
}
