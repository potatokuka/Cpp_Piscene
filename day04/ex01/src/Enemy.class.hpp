/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 15:55:22 by greed         #+#    #+#                 */
/*   Updated: 2020/07/30 15:55:23 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include <string>

class Enemy{
	private:
		Enemy();
	public:
		Enemy(int _hp, std::string const &_type);
		virtual ~Enemy();
		Enemy(Enemy const &src);
		Enemy				&operator=(const Enemy &rhs);
		std::string			const 	&getType() const;
		int					getHP() const;
		virtual void		takeDamage(int damage);
	protected:
		int					_hp;
		std::string			_type;
};

#endif
