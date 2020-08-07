/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 21:37:23 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 21:37:24 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
inline void iter(T *arr, size_t len, void (*f)(T const &)){
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T>
void	print(T value){
	std::cout << value << std::endl;
}

int		main(){
	std::cout << "\033[1;31mWith Strings\033[m" << std::endl;
	std::string arr[3] = {"Hello", "goodbye", "im back"};
	iter(arr, 3, print);
	std::cout << "\033[1;32mWith Ints\033[m" << std::endl;
	int	ints[3] = {1, 2, 69};
	iter(ints, 3, print);
	std::cout << "\033[1;33mWith Float\033[m" << std::endl;
	float floats[3] = {1.0f, 2.2f, 69.69f};
	iter(floats, 3, print);
}
