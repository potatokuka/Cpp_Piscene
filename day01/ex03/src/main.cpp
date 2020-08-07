/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 11:49:58 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 11:50:12 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"
#include "Zombie.class.hpp"

int		main(){
	ZombieHorde horde = ZombieHorde(33);

	horde.announce();
}
