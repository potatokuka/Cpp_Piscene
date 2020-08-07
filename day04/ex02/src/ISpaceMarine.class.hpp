/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.class.hpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 11:51:59 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 12:25:55 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_CLASS_HPP
# define ISPACEMARINE_CLASS_HPP

class ISpaceMarine{
	public:
		virtual ISpaceMarine		*clone() const = 0;
		virtual ~ISpaceMarine(){}
		virtual void				battleCry() const = 0;
		virtual void				rangedAttack() const = 0;
		virtual void				meleeAttack() const = 0;
};

#endif
