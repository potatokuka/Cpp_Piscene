/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.class.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:13 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:14 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

class AMateria;

class ICharacter{
	public:
		virtual ~ICharacter(){}
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter & target) = 0;
};

#endif
