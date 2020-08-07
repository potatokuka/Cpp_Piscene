/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:53:00 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:53:01 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include <string>
# include "Weapon.class.hpp"

class	HumanA{
	private:
		std::string		_name;
		Weapon			&_weapon;
	public:
		HumanA(std::string name, Weapon &w);
		~HumanA();
		void			attack() const;
};

#endif
