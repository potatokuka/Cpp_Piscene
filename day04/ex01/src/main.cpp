/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:24 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 11:34:38 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"
#include "Enemy.class.hpp"
#include "PlasmaRifle.class.hpp"
#include "PowerFist.class.hpp"
#include "RadScorpion.class.hpp"
#include "SuperMutant.class.hpp"
#include <iostream>
#include <iomanip>

int		main(){
	std::srand(time(NULL));
	Character* me = new Character("\033[4;32mHololicanus Solasius\033[0m");
	std::cout << *me;
	Enemy* scorp = new RadScorpion();
	Enemy* supMut = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	int randWep = 0;
	while (scorp->getHP() > 0)
	{
		randWep = (std::rand() % 2);
		randWep == 0 ? me->equip(pr) : me->equip(pf);
		std::cout << *me;
		if (me->getAP() > 10)
			me->attack(scorp);
		else
			me->recoverAP();
	}
	while (supMut->getHP() > 0)
	{
		randWep = (std::rand() % 2);
		randWep == 0 ? me->equip(pr) : me->equip(pf);
		std::cout << *me;
		if (me->getAP() > 10)
			me->attack(supMut);
		else
			me->recoverAP();
	}
	return (0);
}
