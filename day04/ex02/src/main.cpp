/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 12:04:41 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 14:50:01 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.class.hpp"
#include "ISpaceMarine.class.hpp"
#include "ISquad.class.hpp"
#include "Squad.class.hpp"
#include "TacticalMarine.class.hpp"

int		main(){
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad*	scouts = new Squad;
	scouts->push(bob);
	scouts->push(jim);
	for (int i = 0; i < scouts->getCount(); i++)
	{
		ISpaceMarine* cur = scouts->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete scouts;
	return (0);
}
