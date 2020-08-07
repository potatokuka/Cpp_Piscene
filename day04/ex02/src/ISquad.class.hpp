/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:52:01 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 14:45:24 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_CLASS_HPP
# define ISQUAD_CLASS_HPP

# include "ISpaceMarine.class.hpp"

class ISquad{
	public:
		virtual ~ISquad(){}
		virtual int					getCount() const = 0;
		virtual ISpaceMarine		*getUnit(int) const = 0;
		virtual int					push(ISpaceMarine*) = 0;
};

#endif
