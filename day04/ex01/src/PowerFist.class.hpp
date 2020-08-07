/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:31 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:32 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

# include <string>
# include "AWeapon.class.hpp"

class PowerFist : public AWeapon{
	public:
		PowerFist();
		PowerFist(PowerFist const &src);
		virtual ~PowerFist();
		PowerFist		&operator=(const PowerFist &rhs);
		virtual void	attack() const;
};

#endif
