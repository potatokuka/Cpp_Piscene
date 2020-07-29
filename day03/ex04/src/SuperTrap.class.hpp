/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 14:51:58 by greed         #+#    #+#                 */
/*   Updated: 2020/07/29 14:51:59 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SUPERTRAP_CLASS_HPP
# define	SUPERTRAP_CLASS_HPP

# include <string>

# include "FragTrap.class.hpp"
# include "NinjaTrap.class.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap{
	public:
		SuperTrap(const std::string _name);
		SuperTrap(const SuperTrap &obj);
		~SuperTrap();

		SuperTrap&					operator=(const SuperTrap &rhs);
		void						rangedAttack(std::string const &target);
		void						meleeAttack(std::string const &target);
		void						takeDamage(unsigned int amount);
		void						beRepaired(unsigned int amount);
};

#endif
