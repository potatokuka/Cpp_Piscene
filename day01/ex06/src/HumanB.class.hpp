/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:53:04 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:53:05 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# include <string>
# include "Weapon.class.hpp"

class	HumanB{
	private:
		std::string		_name;
		Weapon			*_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void			setWeapon(Weapon &w);
		void			attack() const;
};

#endif
