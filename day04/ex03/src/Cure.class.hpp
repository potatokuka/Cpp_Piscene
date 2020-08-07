/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:06 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:07 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.class.hpp"

class Cure : public AMateria{
	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const &src);
		Cure					&operator=(Cure const &rhs);
		AMateria*					clone() const;
		void						use(ICharacter &target);
};

#endif
