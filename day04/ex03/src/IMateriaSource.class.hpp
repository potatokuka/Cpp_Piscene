/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.class.hpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:16 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 18:21:19 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

# include <string>
# include "AMateria.class.hpp"

class IMateriaSource{
	public:
		virtual 			~IMateriaSource() {}
		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria* 	createMateria(std::string const &type) = 0;
};

#endif
