/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.class.hpp                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 19:49:50 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 19:49:51 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include <string>
# include "Form.class.hpp"
# include "Bureaucrat.class.hpp"

class RobotomyRequestForm : public Form{
	private:
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		void	_execute(Bureaucrat const &executor) const;
};

#endif
