/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:01 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:02 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <string>
# include "ICharacter.class.hpp"
# include "AMateria.class.hpp"

class Character : public ICharacter{
	private:
		Character();
		std::string					_name;
		AMateria					*_inventory[4];
	public:
		Character(std::string const &name);
		virtual ~Character();
		Character(Character const &src);
		Character					&operator=(Character const &rhs);
		virtual std::string const	&getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};

#endif
