/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 21:35:55 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 21:35:56 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

class Pony{
	private:
		std::string	_name;
		std::string	_color;
		int			_age;
	public:
		std::string	GetName(){return _name;}
		void		SetName(std::string _name){this->_name = _name;}
		std::string	GetColor(){return _color;}
		void		SetColor(std::string _color){this->_color = _color;}
		int			GetAge(){return _age;}
		void		SetAge(int _age){this->_age = _age;}

		void		SetAll(std::string, std::string, int);
		Pony(std::string, std::string, int);
		Pony();
		~Pony();
		void		ToString();
};
