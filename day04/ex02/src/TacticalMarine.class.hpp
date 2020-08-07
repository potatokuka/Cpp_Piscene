/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:52:10 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 14:46:57 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

# include "ISpaceMarine.class.hpp"

class TacticalMarine : public ISpaceMarine{
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine(TacticalMarine const &src);
		TacticalMarine			&operator=(TacticalMarine const &rhs);
		virtual void				battleCry() const;
		virtual void				rangedAttack() const;
		virtual void				meleeAttack() const;
		virtual ISpaceMarine		*clone() const;
};

#endif
