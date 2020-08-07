/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:41:36 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 13:41:40 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <climits>
#include <cfloat>
#include <math.h>

int			main(int ac, char **av){
	if (ac != 2)
	{
		std::cerr << "Error: correct input = './convert.out [STR]'" << std::endl;
		return (1);
	}
	std::string input = av[1];
	if (input.empty())
	{
		std::cerr << "Thisj I hate you, don't give me ''" << std::endl;
		return(1); 
	}
	for (size_t i = 0; i < input.length(); i++)
		input.at(i) = std::tolower(input.at(i));
	std::cout << "\033[1;31mInput =\033[m " << input << std::endl; 
	// Check if Hex
	bool isHex = (input.compare(0, 2, "0x") == 0);
	// Check if infinite
	bool isInf = (input.compare(0, input.length(), "inf") == 0 ||
				input.compare(0, input.length(), "-inf") == 0 ||
				input.compare(0, input.length(), "+inf") == 0);
	bool isPoint(input.find(".") != std::string::npos);
	bool isOct = (!isHex && !isPoint && input.compare(0, 1, "0") == 0);
	// Kill trailing 'f' if not a Hex
	if (!isHex && !isInf && input.at(input.length() - 1) == 'f')
		input = input.substr(0, input.length() - 1);
	long double res;
	if (input.length() == 3 && input.at(0) == '\'' && input.at(2) == '\'')
		res = static_cast<int>(input.at(1));
	else
	{
		std::istringstream ss(input);
		if (isOct){
			long octal;
			ss >> std::oct >> octal;
			res = octal;
		}
		else
			ss >> res;
	}
	// double
	if (!(isinf(res) || isnan(res)) && (res < DBL_MIN || res > DBL_MAX) && (res != 0))
		std::cerr << "Double: Impossible" << std::endl;
	else
		std::cout << "Double: " << std::fixed << std::setprecision(1)
			<< static_cast<double>(res) << std::endl;
	// float
	if (!(isinf(res) || isnan(res)) && (res < FLT_MIN || res > FLT_MAX) && (res != 0))
		std::cerr << "Float: Impossible" << std::endl;
	else
	std::cout << "Float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(res) << "f" << std::endl;
	// char
	if (isinf(res) || isnan(res) || res < CHAR_MIN || res > CHAR_MAX)
		std::cerr << "Char: Impossible" << std::endl;
	else if (std::isprint(static_cast<char>(res)))
		std::cout << "Char: '" << static_cast<char>(res) << "'" << std::endl;
	else
		std::cout << "Char: Can not be displayed" << std::endl;
	// int
	if (isinf(res) || isnan(res) || res < INT_MIN || res > INT_MAX)
		std::cerr << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(res) << std::endl;

	return (0);
}
