/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:07:28 by greed         #+#    #+#                 */
/*   Updated: 2020/07/28 13:07:29 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed{
	private:
		int					_value;
		static const int	_fractionalBits;
		static const int	_pwr;
	public:
		Fixed();
		Fixed(int const _value);
		Fixed(float const _value);
		Fixed(Fixed const &source);
		~Fixed();
		Fixed&				operator=(Fixed const &grd);
		int					getRawBits() const;
		void				setRawBits(int const raw);
		float				toFloat() const;
		int					toInt() const;
};

std::ostream &operator << (std::ostream &oss, Fixed const &grd);

#endif
