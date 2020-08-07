/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:01:44 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 11:01:45 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include <string>
# include <iostream>
# include "Victim.class.hpp"

class Sorcerer{
	private:
		std::string		_name;
		std::string		_title;
	public:
		Sorcerer();
		Sorcerer(const Sorcerer &src);
		Sorcerer(std::string _name, std::string _title);
		~Sorcerer();

		Sorcerer&		operator=(const Sorcerer &rhs);

		std::string		getName() const;
		void			setName(std::string _name);
		std::string		getTitle() const;
		void			setTitle(std::string _title);
		void			polymorph(Victim const &victim) const;
};

std::ostream			&operator << (std::ostream &o, const Sorcerer &rhs);

#endif
