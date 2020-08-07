/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:35 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:36 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

# include <string>
# include "Enemy.class.hpp"

class RadScorpion : public Enemy{
	private:
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &src);
		virtual ~RadScorpion();
		RadScorpion		&operator=(const RadScorpion &rhs);
};

#endif
