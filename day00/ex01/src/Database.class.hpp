/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Database.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 10:47:05 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 10:47:06 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATABASE_CLASS_H
# define DATABASE_CLASS_H

# include "Contact.class.hpp"

class	Database
{
	public:
		Database(void);
		~Database(void);

		int		Count(void) const;
		void	AddContact(Contact c);
		Contact GetContact(int i) const;
		void	List(void) const;

	private:
		int		_count;
		Contact	_contacts[8];
};

#endif
