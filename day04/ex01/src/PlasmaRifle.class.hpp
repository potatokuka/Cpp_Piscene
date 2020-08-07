/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:27 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:28 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

# include <string>
# include "AWeapon.class.hpp"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &src);
		virtual ~PlasmaRifle();
		PlasmaRifle			&operator=(const PlasmaRifle &rhs);
		virtual void		attack()const;
};

#endif
