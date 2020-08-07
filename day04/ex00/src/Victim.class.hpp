/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 11:01:48 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 11:01:49 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <string>
# include <iostream>

class Victim{
	private:
		std::string			_name;
	public:
		Victim();
		Victim(const Victim &src);
		Victim(std::string _name);
		virtual ~Victim();

		Victim				&operator=(const Victim &rhs);
		std::string			getName() const;
		void				setName(std::string _name);
		virtual void		getPolymorphed() const;
};

std::ostream				&operator<<(std::ostream &o, const Victim &rhs);

#endif
