/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 00:26:52 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 00:46:41 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <string>

class ClapTrap{
	protected:
		std::string					_name;
		unsigned int				_health;
		unsigned int				_maxHealth;
		unsigned int				_energy;
		unsigned int				_maxEnergy;
		unsigned int				_level;
		unsigned int				_meleeDmg;
		unsigned int				_rangedDmg;
		unsigned int				_armor;
	public:
		/* unsigned int 				curr_hp; */
		ClapTrap(const std::string _name, unsigned int _health,
				unsigned int _maxHealth, unsigned int _energy, unsigned int _maxEnergy,
				unsigned int _level, unsigned int _meleeDmg, unsigned int _rangedDmg,
				unsigned int _armor);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();
		ClapTrap&					operator=(const ClapTrap &rhs);
		/* void						rangedAttack(std::string const &target); */
		/* void						meleeAttack(std::string const &target); */
		/* void						takeDamage(unsigned int amount); */
		/* void						beRepaired(unsigned int amount); */
};

#endif
