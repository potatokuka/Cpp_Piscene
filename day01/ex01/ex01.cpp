/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 22:26:28 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 22:26:29 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(){
	std::string	*panther = new std::string("String Panther");

	std::cout << *panther << std::endl;
	delete panther;
	return ;
}
