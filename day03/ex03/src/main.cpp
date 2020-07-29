/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:34:38 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 15:46:08 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include <iomanip>

int		main(){
	FragTrap frag("\033[4;31mGeorge Michael\033[0m");
	ScavTrap frag2("\033[4;32mJonny Wiseau\033[0m");
	NinjaTrap ninja("\033[4;35mGentle Chapman\033[0m");
	
	std::srand(time(NULL));
	std::cout << std::endl << std::setw(42) << "FIGHT" << std::internal
			<< std::endl << std::endl;
	int round = 0;
	int randAttacker = 0;
	int randTarget = 0;
	while ((frag.curr_hp > 0 && frag2.curr_hp > 0) || (frag.curr_hp > 0 && ninja.curr_hp > 0)
			|| (ninja.curr_hp > 0 && frag2.curr_hp > 0))
	{
		round += 1;
		while (1)
		{
			randAttacker = (std::rand() % 3);
			if (randAttacker == FRAG && frag.curr_hp > 0)
				break ;
			if (randAttacker == FRAG2 && frag2.curr_hp > 0)
				break ;
			if (randAttacker == NINJA && ninja.curr_hp > 0)
				break ;
		}
		while (1)
		{
			randTarget = (std::rand() % 3);
			if (randTarget == FRAG2 && frag2.curr_hp > 0 && randAttacker != FRAG2)
				break ;
			if (randTarget == FRAG && frag.curr_hp > 0 && randAttacker != FRAG)
				break ;
			if (randTarget == NINJA && ninja.curr_hp > 0 && randAttacker != NINJA)
				break ;
		}
		int randHit = (std::rand() % 6);
		std::cout << std::setw(42) << "* ROUND " << round << " *" <<
				std::setfill(' ') << std::endl;
		if (randAttacker == FRAG)
		{
			if (randHit == 1)
			{
				if (randTarget == FRAG2)
				{
					frag.vaulthunter_dot_exe("\033[4;32mJonny Wiseau\033[0m");
					frag2.takeDamage(40);
				}
				else if (randTarget == NINJA)
				{
					frag.vaulthunter_dot_exe("\033[4;35mGentle Chapman\033[0m");
					ninja.takeDamage(40);
				}
			}
			else if (randHit == 2)
			{
				if (randTarget == FRAG2)
				{
					frag.meleeAttack("\033[4;32mJonny Wiseau\033[0m");
					frag2.takeDamage(30);
				}
				else if (randTarget == NINJA)
				{
					frag.meleeAttack("\033[4;35mGentle Chapman\033[0m");
					ninja.takeDamage(30);
				}
			}	
			else if (randHit == 3)
			{
				if (randTarget == FRAG2)
				{
					frag.rangedAttack("\033[4;32mJonny Wiseau\033[0m");
					frag2.takeDamage(20);
				}
				else if (randTarget == NINJA)
				{
					frag.rangedAttack("\033[4;35mGentle Chapman\033[0m");
					ninja.takeDamage(20);
				}
			}
			else
			{
				frag.beRepaired(10);
			}
		}
		else if (randAttacker == FRAG2)
		{
			if (randHit == 1)
			{
				if (randTarget == FRAG)
				{
					frag2.challengeNewcomer("\033[4;31mGeorge Michael\033[0m");
					frag.takeDamage(40);
				}
				else if (randTarget == NINJA)
				{
					frag2.challengeNewcomer("\033[4;35mGentle Chapman\033[0m");
					ninja.takeDamage(40);
				}
			}
			else if (randHit == 2)
			{
				if (randTarget == FRAG)
				{
					frag2.meleeAttack("\033[4;31mGeorge Michael\033[0m");
					frag.takeDamage(30);
				}
				else if (randTarget == NINJA)
				{
					frag2.meleeAttack("\033[4;35mGentle Chapman\033[0m");
					ninja.takeDamage(30);
				}
			}	
			else if (randHit == 3)
			{
				if (randTarget == FRAG)
				{
					frag2.rangedAttack("\033[4;31mGeorge Michael\033[0m");
					frag.takeDamage(20);
				}
				else if (randTarget == NINJA)
				{
					frag2.rangedAttack("\033[4;35mGentle Chapman\033[0m");
					ninja.takeDamage(30);
				}
			}
			else
			{
				frag2.beRepaired(10);
			}
		}
		else if (randAttacker == NINJA)
		{
			if (randHit == 1)
			{
				if (randTarget == FRAG2)
				{
					ninja.ninjaShoebox(frag2);
					frag2.takeDamage(40);
				}
				else if (randTarget == FRAG)
				{
					ninja.ninjaShoebox(frag);
					frag.takeDamage(40);
				}
			}
			else if (randHit == 2)
			{
				if (randTarget == FRAG2)
				{
					ninja.meleeAttack("\033[4;32mJonny Wiseau\033[0m");
					frag2.takeDamage(60);
				}
				else if (randTarget == FRAG)
				{
					ninja.meleeAttack("\033[4;31mGeorge Michael\033[0m");
					frag.takeDamage(60);
				}
			}	
			else if (randHit == 3)
			{
				if (randTarget == FRAG2)
				{
					ninja.rangedAttack("\033[4;32mJonny Wiseau\033[0m");
					frag2.takeDamage(5);
				}
				else if (randTarget == FRAG)
				{
					ninja.rangedAttack("\033[4;31mGeorge Michael\033[0m");
					frag.takeDamage(5);
				}
			}
			else
			{
				ninja.beRepaired(10);
				ninja.ninjaShoebox(ninja);
			}
		}
	}
	std::cout << std::endl << std::setw(44) << "*  OVER  *" << std::internal
			<< std::endl << std::endl;
	if (frag.curr_hp <= 0 && ninja.curr_hp <= 0)
	{
		std::cout << "\033[4;31mGeorge Michael\033[0m was a bit too much of a Careless Whisperer, and"
		<< " \033[4;35mGentle Chapman\033[0m has been confirmed too be too chapped."
			<< " \033[4;32mJonny Wiseau\033[0m is the VICTOR with " << frag2.curr_hp <<
			" health left!" << std::endl;
	}
	else if (ninja.curr_hp <= 0 && frag2.curr_hp <= 0)
	{
		std::cout << "\033[4;32mJonny Wiseau\033[0m NO NO NO, Johnny has parished!"
		" \033[4;35mGentle Chapman\033[0m has been confirmed too be too chapped."
		<< " \033[4;31mGeorge Michael\033[0m is the VICTOR"
			" with " << frag.curr_hp << " health left!" << std::endl;
	}
	else
	{
		std::cout << "\033[4;31mGeorge Michael\033[0m was a bit too much of a Careless Whisperer, and"
		 << " \033[4;32mJonny Wiseau\033[0m NO NO NO, Johnny has parished!"
		 << " \033[4;35mGentle Chapman\033[0m has achieved WORLD DOMINATION with " << ninja.curr_hp <<
		 " health left!" << std::endl;
	}
	return (0);
}
