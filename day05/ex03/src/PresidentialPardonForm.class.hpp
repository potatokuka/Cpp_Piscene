/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.class.hpp                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 19:49:55 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 19:49:56 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include <string>
# include "Form.class.hpp"
# include "Bureaucrat.class.hpp"

class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		void	_execute(Bureaucrat const &executor) const;
	private:
};

#endif
