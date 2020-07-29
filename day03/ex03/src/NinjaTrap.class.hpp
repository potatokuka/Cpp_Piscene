/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:07:21 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 11:07:22 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_H
# define NINJATRAP_CLASS_H

# include <string>

# include "ClapTrap.class.hpp"
# include "FragTrap.class.hpp"
# include "ScavTrap.class.hpp"

class NinjaTrap : public ClapTrap{
	private:
		static std::string	_vaulThunter[MAX_QUOTES];
	public:
		NinjaTrap(const std::string name);
		NinjaTrap(const NinjaTrap &obj);
		~NinjaTrap();
		
		NinjaTrap&			operator=(const NinjaTrap &rhs);
		void						rangedAttack(std::string const &target);
		void						meleeAttack(std::string const &target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);

		void						ninjaShoebox(NinjaTrap &target);
		void						ninjaShoebox(ClapTrap &target);
		void						ninjaShoebox(FragTrap &target);
		void						ninjaShoebox(ScavTrap &target);
};

#endif
