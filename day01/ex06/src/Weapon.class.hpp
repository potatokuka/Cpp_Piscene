/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:53:10 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:53:11 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <string>

class	Weapon{
	private:
		std::string 		_type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string	getType(void) const;
		void				setType(std::string type){this->_type = type;}
};

#endif
