/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:15:17 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:15:18 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.class.hpp"
#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "ICharacter.class.hpp"
#include "IMateriaSource.class.hpp"
#include "MateriaSource.class.hpp"

int		main(){
	IMateriaSource* matSrc = new MateriaSource();
	matSrc->learnMateria(new Ice());
	matSrc->learnMateria(new Cure());
	ICharacter* grif = new Character("Griffin");
	AMateria*	matICE;
	AMateria*	matCUR;
	matICE = matSrc->createMateria("Ice");
	matCUR = matSrc->createMateria("Cure");
	grif->equip(matICE);
	grif->equip(matCUR);
	ICharacter* vic = new Character("Victor");
	std::cout << matICE->getType() << " xp is "<< matICE->getXp() << std::endl;
	std::cout << matCUR->getType() << " xp is "<< matCUR->getXp() << std::endl;
	grif->use(0, *vic);
	std::cout << matICE->getType() << " xp is "<< matICE->getXp() << std::endl;
	grif->unequip(0);
	grif->use(1, *grif);
	std::cout << matCUR->getType() << " xp is "<< matCUR->getXp() << std::endl;
	grif->use(0, *vic);
	std::cout << matICE->getType() << " xp is "<< matICE->getXp() << std::endl;
	grif->use(1, *grif);
	grif->equip(matICE);
	std::cout << matCUR->getType() << " xp is "<< matCUR->getXp() << std::endl;
	grif->use(0, *vic);
	std::cout << matICE->getType() << " xp is "<< matICE->getXp() << std::endl;
	grif->use(1, *vic);
	std::cout << matCUR->getType() << " xp is "<< matCUR->getXp() << std::endl;
	delete vic;
	delete grif;
	delete matSrc;
	return (0);
}
