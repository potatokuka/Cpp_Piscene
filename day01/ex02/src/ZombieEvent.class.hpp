/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 10:21:18 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 10:21:19 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

# include "Zombie.class.hpp"

class ZombieEvent{
	private:
		std::string			_type;
		static std::string	_names[10];
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(std::string type){this->_type = type;}
		Zombie	*newZombie(std::string name) const;

		void	randomChump(void) const;
};

#endif
