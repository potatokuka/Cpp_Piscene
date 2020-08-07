/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 12:19:58 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 12:19:59 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(){
	std::string brain = "HI THIS IS BRAIN";
	
	std::string *brain_ptr = &brain;
	std::string &brain_ref = brain;
	std::cout << "String: " << brain << std::endl;
	std::cout << "PTR: " << brain_ptr << " " << *brain_ptr << std::endl;
	std::cout << "REF: " << brain_ref << std::endl;
	return (0);
}
