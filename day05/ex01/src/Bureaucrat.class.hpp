/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.class.hpp                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:52:23 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 21:52:24 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <stdexcept>
#include <string>
#include <iostream>

#include "Form.class.hpp"

// Are you ready for the clusterfuck of nested classes?

class Bureaucrat{
	private:
		const std::string					_name;
		int									_grade;
	public:
		class	GradeTooHighException : public std::exception{
					private:
						int					_grade;
					public:
						GradeTooHighException(int grade);
						GradeTooHighException(GradeTooHighException const &src);
						~GradeTooHighException() throw();
						GradeTooHighException &operator=(GradeTooHighException const &rhs);

						const char 	*what() const throw();
						int					getGrade() const;
		};

		class	GradeTooLowException : public std::exception{
					private:
						int					_grade;
					public:
						GradeTooLowException(int grade);
						GradeTooLowException(GradeTooLowException const &src);
						~GradeTooLowException() throw();
						GradeTooLowException &operator=(GradeTooLowException const &rhs);
						const char	*what(void) const throw();
						int					getGrade() const;
		};
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();
		Bureaucrat			&operator=(Bureaucrat const &rhs);
		const std::string	getName() const;
		void				signForm(Form &f);
		int					getGrade() const;
		void				setGrade(int grade);
		void				incrementGrade();
		void				decrementGrade();
};

std::ostream				&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
