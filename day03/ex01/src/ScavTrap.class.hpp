/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 22:57:06 by greed         #+#    #+#                 */
/*   Updated: 2020/07/28 22:59:27 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <string>
# define MAX_CHALLENGE	11

class ScavTrap{
	private:
		std::string					_name;
		unsigned int				_health;
		unsigned int				_maxHealth;
		unsigned int				_energy;
		unsigned int				_maxEnergy;
		unsigned int				_level;
		unsigned int				_meleeDmg;
		unsigned int				_rangedDmg;
		unsigned int				_armor;
		static std::string			_challenges[MAX_CHALLENGE];
	public:
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap();
		ScavTrap&					operator=(const ScavTrap &rhs);
		unsigned int 				curr_hp;
		void						rangedAttack(std::string const &target);
		void						meleeAttack(std::string const &target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);
		void						challengeNewcomer(std::string const &target);
};

#endif
