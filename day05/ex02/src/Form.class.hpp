/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:47:30 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 13:47:31 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <stdexcept>
# include <string>
# include <iostream>

class Bureaucrat;

class Form{
	public:
		class GradeTooHighException : public std::exception{
				private:
					int						_grade;
				public:
					GradeTooHighException(int grade);
					GradeTooHighException(GradeTooHighException const &src);
					~GradeTooHighException() throw();
					GradeTooHighException	&operator=(GradeTooHighException const &rhs);
					const char				*what() const throw();
					int						getGrade() const;
		};
		class GradeTooLowException : public std::exception{
				private:
					int						_grade;
				public:
					GradeTooLowException(int grade);
					GradeTooLowException(GradeTooLowException const &src);
					~GradeTooLowException() throw();
					GradeTooLowException	&operator=(GradeTooLowException const &rhs);
					const char				*what() const throw();
					int						getGrade() const;
		};
		class	NotSignedException : public std::exception{
			public:
				NotSignedException();
				NotSignedException(NotSignedException const &src);
				~NotSignedException() throw();
				NotSignedException	&operator=(NotSignedException const &rhs);
				const char			*what() const throw();
		};
		Form();
		Form(const std::string name, const int sign, int exec, std::string target);
		Form(Form const &src);
		~Form();
		Form								&operator=(Form const &rhs);
		const std::string					getName() const;
		int									getGradeSign() const;
		int									getGradeExec() const;
		bool								isSigned() const;
		void								beSigned(Bureaucrat &b);
		std::string							getTarget() const;
		void								execute(Bureaucrat const &executor) const;
	private:
		const std::string					_name;
		const int							_gradeSign;
		const int							_gradeExec;
		bool								_signed;
		std::string							_target;

		// overloadable pure for inherents
		virtual void						_execute(Bureaucrat const &executor) const = 0;
};

std::ostream								&operator<<(std::ostream &o, Form const &rhs);

#endif
