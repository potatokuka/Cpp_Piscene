/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 10:51:00 by greed         #+#    #+#                 */
/*   Updated: 2020/07/25 10:51:01 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

# define FIELD_COUNT 11

class Contact{
	public:
		Contact(void);
		~Contact(void);

		void		Prompt(void);
		void		Display(void) const;
		std::string GetField(int field) const;
		void		SetField(int field, std::string value);

		static int	FindField(std::string field);

	private:
		static std::string _fieldNames[FIELD_COUNT];
		std::string		   _fields[FIELD_COUNT];
};

#endif
