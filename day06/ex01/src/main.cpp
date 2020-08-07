/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:41:46 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 13:41:47 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

struct	Data{
	std::string s1;
	int			n;
	std::string s2;
};

void		*serialize(){
	char *c = new char[16 + sizeof(int)];
	char	random[63]  = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 8; i++)
		c[i] = random[std::rand() % 62];
	*reinterpret_cast<int*>(c + 8) = std::rand();
	for (int i = 0; i < 8; i++)
		c[i + 8 + sizeof(int)] = random[std::rand() % 62];
	return (c);
}

struct Data	*deserialize(void *raw){
	Data	*data = new Data();
	char	*c = reinterpret_cast<char*>(raw);
	data->s1 = std::string(c, 8);
	data->n = *reinterpret_cast<int*>(c + 8);
	data->s2 = std::string(c + 8 + sizeof(int), 8);
	return (data);
}

int		main(){
	std::srand(time(NULL));
	void	*raw = serialize();
	if (raw == NULL){
		std::cout << "Memory allocation failed in Serialize." << std::endl;
		return (1);
	}
	Data	*data = deserialize(raw);
	unsigned char	*c = reinterpret_cast<unsigned char*>(raw);
	std::cout << "RAW:" << std::endl;
	for (size_t i = 0; i < 16 + sizeof(int); i++)
		std::cout << std::hex << std::showbase << +c[i] << " ";
	std::cout << std::endl << std::endl;
	std::cout << "DESERIALIZED DATA:" << std::endl;
	std::cout << "s1 = " << data->s1 << std::endl;
	std::cout << "n = " << std::dec << data->n << std::endl;
	std::cout << "s2 = " << data->s2 << std::endl;
	delete data;
	delete c;
}
