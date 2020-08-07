/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:21:42 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:21:43 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

# include "Brain.class.hpp"

class	Human{
	private:
		const	Brain _brain;
	public:
		Human();
		~Human();
		const Brain &getBrain() const;
		std::string identify() const;
};

#endif
