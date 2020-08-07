/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Aweapon.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:14 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:15 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

# include <string>

class AWeapon{
	private:
		AWeapon();
	public:
		AWeapon(const AWeapon &src);
		AWeapon(const std::string &name, int apcost, int damage);
		virtual ~AWeapon();

		AWeapon				&operator=(const AWeapon &rhs);
		virtual void		attack() const = 0;
		int					getAPCost() const;
		int					getDamage() const;
		const std::string	getName() const;
	protected:
		int					_damage;
		int					_apcost;
		std::string			_name;
};

#endif
