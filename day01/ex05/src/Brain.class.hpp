/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 14:21:31 by greed         #+#    #+#                 */
/*   Updated: 2020/07/26 14:21:32 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

# include <string>

class	Brain{
	public:
		Brain();
		~Brain();
		std::string	identify() const;
};

#endif
