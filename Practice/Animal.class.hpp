/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 17:53:26 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 17:53:27 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal{
	protected:
		std::string _name;
		double		_height;
		double		_weight;

		static int	_numOfAnimals;

	public:
		std::string	GetName(){return _name;}
		void 		SetName(std::string _name){this->_name = _name;}
		double		GetHeight(){return _height;}
		void 		SetHeight(double _height){this->_height = _height;}
		double		GetWeight(){return _weight;}
		void 		SetWeight(double _weight){this->_weight = _weight;}

		void		SetAll(std::string, double, double);
		Animal(std::string, double, double);
		Animal();
		~Animal();
		static int	GetNumOfAnimals(){return _numOfAnimals;}
		void		ToString();
};
