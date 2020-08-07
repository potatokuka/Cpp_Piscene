/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.class.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 11:54:01 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 11:54:02 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

# include "Zombie.class.hpp"

#define MAX_TYPE 4
#define MAX_NAME 10

class ZombieHorde{
	private:
		int						_numOfZombies;
		Zombie					*_zombies;
		static std::string		_types[MAX_TYPE];
		static std::string		_names[MAX_NAME];
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		
		void	announce() const;
};

#endif
