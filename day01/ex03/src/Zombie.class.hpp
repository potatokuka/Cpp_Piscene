/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 11:49:53 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 11:49:54 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <string>

class Zombie{
	private:
		std::string	_name;
		std::string	_type;
	public:
		std::string	GetName(){return _name;}
		void		SetName(std::string _name){this->_name = _name;}
		std::string	GetType(){return _type;}
		void		SetType(std::string _type){this->_type = _type;}

		void		SetAll(std::string, std::string);
		Zombie();
		~Zombie();
		void		announce() const;
};

#endif
