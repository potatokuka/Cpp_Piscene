/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:52:05 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 14:48:51 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

# include "ISquad.class.hpp"

class Squad : public ISquad{
	private:
		int							_count;
		ISpaceMarine				**_units;
	public:
		Squad();
		virtual ~Squad();
		Squad(Squad const &src);
		Squad						&operator=(Squad const &rhs);
		virtual int					getCount() const;
		virtual ISpaceMarine*		getUnit(int index) const;
		virtual int					push(ISpaceMarine *unit);
};

#endif
