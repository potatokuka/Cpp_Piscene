/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:34:38 by greed         #+#    #+#                 */
/*   Updated: 2020/07/28 21:47:23 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <iomanip>

int		main(){
	FragTrap frag("\033[1;31mGeorge Michael\033[0m");
	ScavTrap frag2("\033[1;32mJonny Wiseau\033[0m");
	
	std::srand(time(NULL));
	std::cout << std::endl << std::setw(42) << "FIGHT" << std::internal
			<< std::endl << std::endl;
	int round = 0;
	while (true)
	{
		round += 1;
		int randAttacker = (std::rand() % 2);
		int randHit = (std::rand() % 6);
		std::cout << std::setw(42) << "* ROUND " << round << " *" <<
				std::setfill(' ') << std::endl;
		if (randAttacker == FRAG)
		{
			if (randHit == 1)
			{
				frag.vaulthunter_dot_exe("\033[1;32mJonny Wiseau\033[0m");
				frag2.takeDamage(40);
				if (frag2.curr_hp <= 0)
					break ;
			}
			else if (randHit == 2)
			{
				frag.meleeAttack("\033[1;32mJonny Wiseau\033[0m");
				frag2.takeDamage(30);
				if (frag2.curr_hp <= 0)
					break ;
			}	
			else if (randHit == 3)
			{
				frag.rangedAttack("\033[1;32mJonny Wiseau\033[0m");
				frag2.takeDamage(20);
				if (frag2.curr_hp <= 0)
					break ;
			}
			else
			{
				frag.beRepaired(10);
			}
		}
		else
		{
			if (randHit == 1)
			{
				frag2.challengeNewcomer("\033[1;31mGeorge Michael\033[0m");
				frag.takeDamage(40);
				if (frag.curr_hp <= 0)
					break ;
			}
			else if (randHit == 2)
			{
				frag2.meleeAttack("\033[1;31mGeorge Michael\033[0m");
				frag.takeDamage(30);
				if (frag.curr_hp <= 0)
					break ;
			}	
			else if (randHit == 3)
			{
				frag2.rangedAttack("\033[1;31mGeorge Michael\033[0m");
				frag.takeDamage(20);
				if (frag.curr_hp <= 0)
					break ;
			}
			else
			{
				frag2.beRepaired(10);
			}
		}
	}
	std::cout << std::endl << std::setw(44) << "*  OVER  *" << std::internal
			<< std::endl << std::endl;
	if (frag.curr_hp <= 0)
	{
		std::cout << "\033[1;31mGeorge Michael\033[0m was a bit too much of a Careless Whisperer, and"
			<< " \033[1;32mJonny Wiseau\033[0m is the VICTOR with " << frag2.curr_hp <<
			" health left!" << std::endl;
	}
	else
	{
		std::cout << "\033[1;32mJonny Wiseau\033[0m NO NO NO, Johnny has parished! \033[1;31mGeorge Michael\033[0m is the VICTOR"
			" with " << frag.curr_hp << " health left!" << std::endl;
	}
	return (0);
}
