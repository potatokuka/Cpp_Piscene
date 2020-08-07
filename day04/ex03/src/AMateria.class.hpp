/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:19:56 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:19:57 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <string>
# include "ICharacter.class.hpp"

class AMateria{
	private:
		AMateria();
	protected:
		std::string				_type;
		unsigned int			_xp;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &src);
		AMateria				&operator=(AMateria const &rhs);
		std::string const		&getType() const;
		unsigned int			getXp() const;
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter &target);
};

#endif
