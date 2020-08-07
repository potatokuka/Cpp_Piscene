/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.class.hpp                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:51:54 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 11:51:55 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

# include "ISpaceMarine.class.hpp"

class AssaultTerminator : public ISpaceMarine{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &src);
		AssaultTerminator			&operator=(AssaultTerminator const &rhs);
		virtual void				battleCry() const;
		virtual void				rangedAttack() const;
		virtual void				meleeAttack() const;
		virtual ISpaceMarine		*clone() const;
};

#endif
