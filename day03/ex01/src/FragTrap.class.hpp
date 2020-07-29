/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:34:36 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 14:22:00 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include <string>
#include <iostream>
# define MAX_QUOTES 11
# define FRAG		0
# define FRAG2		1

class FragTrap{
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
		static std::string			_vaulThunter[MAX_QUOTES];
	public:
		FragTrap(const std::string _name);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		FragTrap&					operator=(const FragTrap &rhs);
		unsigned int 				curr_hp;
		void						rangedAttack(std::string const &target);
		void						meleeAttack(std::string const &target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);
		void						vaulthunter_dot_exe(std::string const &target);
};

#endif
