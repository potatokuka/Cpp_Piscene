/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 21:37:17 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 21:37:18 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
inline const T& min(const T &a, const T &b){
	return (a < b ? a : b);
}

template <typename T>
inline const T& max(const T &a, const T &b){
	return (a > b ? a : b);
}

template <typename T>
inline void swap(T &a, T&b){
	T t;

	t = a;
	a = b;
	b = t;
}

int		main(){
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "SWAP" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "smollboi1";
	std::string d = "smollboi2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "SWAP" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
}
