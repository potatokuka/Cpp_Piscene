/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.class.hpp                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 19:49:46 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 19:49:47 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include <string>
# include "Form.class.hpp"
# include "Bureaucrat.class.hpp"

class ShrubberyCreationForm : public Form{
	private:
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		void	_execute(Bureaucrat const &executor) const;
};

#endif
