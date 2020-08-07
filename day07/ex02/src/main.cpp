/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 21:38:27 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 21:38:28 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Array.class.hpp"

int		main(){
	Array<int>a(12);
	std::cout << "A = ";
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "\033[1;31mA[i] = i\033[m" << std::endl;
	for (size_t i = 0; i < a.size(); i++){
		/* a[i] = static_cast<int>(i); */
		a[i] = i;
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	Array<int>b(a);
	std::cout << "B = ";
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	std::cout << "A = ";
	for (size_t i = 0; i < a.size(); i++){
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	Array<int>c;
	c = b;
	std::cout << "C = ";
	for(size_t i = 0; i < c.size(); i++){
		c[i]++;
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "B = ";
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
}
