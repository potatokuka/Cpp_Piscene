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

int		main(){
	std::cout << " * Office Hell is Activated !" << std::endl;
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
	return (0);
}
