/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 22:33:38 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 22:33:39 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include <string>
# include "Form.class.hpp"

class Intern{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern		&operator=(Intern const &rhs);
		Form		*makeForm(std::string type, std::string target);
};

struct FormType{
	std::string type;
	Form *(*make)(std::string);
};

#endif
