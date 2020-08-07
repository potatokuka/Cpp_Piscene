/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 21:52:26 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 21:52:27 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int		main(){
	std::cout << " \033[1;31m*-Office Hell is Activated !-*\033[m" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;
	std::cout << std::endl << " * setting grade." << std::endl;
	b.setGrade(100);
	std::cout << b << std::endl;

	std::cout << std::endl << " *forcing grade too low." << std::endl;
	try {
		Bureaucrat bLow("Coca", 156);
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cout << std::endl;
		std::cout << e.what() << ": " << e.getGrade() << std::endl;
	}

	std::cout << " *forcing grade too high." << std::endl;
	try{
		Bureaucrat bHigh("Richard", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << ": " << e.getGrade() << std::endl;
	}
	std::cout << std::endl << " * Increase *" << std::endl;
	try{
		while (true){
			b.incrementGrade();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	std::cout << std::endl << " * Decrement *" << std::endl;
	try{
		while (true){
			b.decrementGrade();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << b << std::endl;

	std::cout << "\033[1;31m-----<FORM START>-----\033[m" << std::endl;
	std::cout << "* Construct the Instance" << std::endl;
	Form f("Bob", 42, 42);
	std::cout << f << std::endl;
	std::cout << "Forcing grade too low to sign." << std::endl;
	try{
		Form fLow("Coca", 157, 42);
	}
	catch (Form::GradeTooLowException &e){
		std::cout << e.what() << ": " << e.getGrade() << std::endl;
	}
	try{
		Form fLow("Coca", 42, 157);
	}
	catch (Form::GradeTooLowException &e){
		std::cout << e.what() << ": " << e.getGrade() << std::endl;
	}

	std::cout << "Forcing grade too high to sign." << std::endl;
	try{
		Form	fHigh("Pepper", 0, 42);
	}
	catch (Form::GradeTooHighException &e){
		std::cout << e.what() << ": " << e.getGrade() << std::endl;
	}
	try{
		Form	fHigh("Pepper", 42, 0);
	}
	catch (Form::GradeTooHighException &e){
		std::cout << e.what() << ": " << e.getGrade() << std::endl;
	}

	std::cout << "\033[1;32m-----*SIGN IT*-----\033[m" << std::endl;
	{
		Bureaucrat 	signer("Peter", 20);
		Form		form("Addmissions", 10, 10);
		std::cout << signer << std::endl;
		std::cout << form << std::endl;
		try{
			form.beSigned(signer);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		signer.setGrade(10);
		std::cout << signer << std::endl;
		form.beSigned(signer);
		std::cout << form << std::endl;
	}
	{
		Bureaucrat	signer("Ralpho", 60);
		Form		form("Car Loan", 10, 10);
		signer.signForm(form);
		signer.setGrade(10);
		signer.signForm(form);
		signer.signForm(form);
	}
	return (0);
}
