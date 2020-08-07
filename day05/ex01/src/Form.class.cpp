/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 13:47:33 by greed         #+#    #+#                 */
/*   Updated: 2020/08/01 13:47:34 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <string>
#include <iostream>

#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

Form::Form(const std::string name, int sign, int exec) :
	_name(name), _gradeSign(sign), _gradeExec(exec), _signed(false){
		if (sign < 1)
			throw (GradeTooHighException(sign));
		if (sign > 150)
			throw (GradeTooLowException(sign));
		if (exec < 1)
			throw (GradeTooHighException(exec));
		if (exec > 150)
			throw (GradeTooLowException(exec));
}

Form::Form(Form const &src) :
	_name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec),
	_signed(src._signed){}

Form::~Form(){}

Form				&Form::operator=(Form const &){
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Form const &rhs){
	o << "Form: " << rhs.getName() << " (sign " << rhs.getGradeSign()
		<< ", exec " << rhs.getGradeExec() << ")";
	return o;
}

const std::string	Form::getName() const{
	return (this->_name);
}

int					Form::getGradeSign() const{
	return (this->_gradeSign);
}

int					Form::getGradeExec() const{
	return (this->_gradeExec);
}

bool				Form::isSigned() const{
	return (this->_signed);
}

void				Form::beSigned(Bureaucrat &b){
	if (b.getGrade() > this->_gradeSign)
		throw (GradeTooLowException(b.getGrade()));
	this->_signed = true;
}

typedef				Form::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException(const int grade) : _grade(grade)
{}

GradeTooHighException::GradeTooHighException(GradeTooHighException const &src) :
	_grade(src._grade){}

GradeTooHighException::~GradeTooHighException() throw() {}

GradeTooHighException	&GradeTooHighException::operator=(GradeTooHighException const &rhs){
	this->_grade = rhs._grade;
	return (*this);
}

int			GradeTooHighException::getGrade() const{
	return (this->_grade);
}

const char	*GradeTooHighException::what() const throw(){
	return ("Grade is too high.");
}

typedef		Form::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException(const int grade) :
	_grade(grade){}

GradeTooLowException::GradeTooLowException(GradeTooLowException const &rhs) :
	_grade(rhs._grade){}

GradeTooLowException::~GradeTooLowException() throw (){}

GradeTooLowException	&GradeTooLowException::operator=(GradeTooLowException const &rhs){
	this->_grade = rhs._grade;
	return (*this);
}

int			GradeTooLowException::getGrade() const{
	return (this->_grade);
}

const char	*GradeTooLowException::what() const throw(){
	return ("Grade is too low.");
}
