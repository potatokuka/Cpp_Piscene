/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:39 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:40 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

# include <string>
# include "Enemy.class.hpp"

class SuperMutant : public Enemy{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &src);
		virtual ~SuperMutant();
		SuperMutant		&operator=(const SuperMutant &rhs);
		virtual void	takeDamage(int damage);
};

#endif
