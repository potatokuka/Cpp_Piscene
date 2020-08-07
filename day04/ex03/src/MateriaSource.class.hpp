/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.class.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 15:20:21 by greed         #+#    #+#                 */
/*   Updated: 2020/07/31 15:20:22 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "AMateria.class.hpp"
# include "IMateriaSource.class.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria*	_inventory[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource			&operator=(MateriaSource const &rhs);
		virtual void			learnMateria(AMateria*);
		virtual AMateria*		createMateria(std::string const &type);
};

#endif
