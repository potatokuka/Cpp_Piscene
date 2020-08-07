/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:18 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:19 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <string>
# include "AWeapon.class.hpp"
# include "Enemy.class.hpp"

class Character{
	private:
		Character();
		int					_ap;
		AWeapon				*_aweapon;
		std::string			_name;
	public:
		Character(std::string const &name);
		virtual				~Character();
		Character			&operator=(Character const &rhs);
		void				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		std::string const	&getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;
};

std::ostream				&operator<<(std::ostream &o, const Character &rhs);

#endif
