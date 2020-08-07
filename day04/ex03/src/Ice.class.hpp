/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.class.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:10 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:11 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.class.hpp"

class Ice : public AMateria{
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &src);
		Ice							&operator=(Ice const &rhs);
		AMateria*					clone() const;
		void						use(ICharacter &target);
};

#endif
