/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:52:21 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 21:52:22 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <string>
#include <iostream>

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :
	_name(src._name), _grade(src._grade){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs){
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat's grade is " << rhs.getGrade();
	return (o);
}

const std::string	Bureaucrat::getName() const{
	return (this->_name);
}

int					Bureaucrat::getGrade() const{
	return (this->_grade);
}

void				Bureaucrat::setGrade(int grade){
	if (grade < 1)
		throw GradeTooHighException(grade);
	if (grade > 150)
		throw GradeTooLowException(grade);
	this->_grade = grade;
}

void				Bureaucrat::incrementGrade(){
	this->setGrade(this->_grade - 1);
}

void				Bureaucrat::decrementGrade(){
	this->setGrade(this->_grade + 1);
}

// Nested Execption classes

typedef		Bureaucrat::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException(const int grade) : _grade(grade)
{}

GradeTooHighException::GradeTooHighException(GradeTooHighException const &src):
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
	return ("Grade too high.");
}

typedef	Bureaucrat::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException(const int grade) :
	_grade(grade){}

GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) :
	_grade(src._grade){}

GradeTooLowException::~GradeTooLowException() throw() {}

GradeTooLowException &GradeTooLowException::operator=(GradeTooLowException const &rhs){
	this->_grade = rhs._grade;
	return (*this);
}

int			GradeTooLowException::getGrade() const{
	return (this->_grade);
}

const char	*GradeTooLowException::what(void) const throw(){
	return "Grade is too low.";
}
