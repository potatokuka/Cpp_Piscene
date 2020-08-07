/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:01:39 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:05:19 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include <string>
# include <iostream>
# include "Victim.class.hpp"

class Peon : public Victim{
	private:
		std::string		_name;
	public:
		Peon();
		Peon(const Peon &src);
		Peon(std::string _name);
		virtual ~Peon();

		Peon			&operator=(const Peon &rhs);
		virtual void	getPolymorphed() const;
};

#endif
