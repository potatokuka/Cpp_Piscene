/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:20:46 by greed         #+#    #+#                 */
/*   Updated: 2020/07/27 15:20:47 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class	Fixed{
	private:
		int						_value;
		static const int		_fractional_bits;
	public:
		Fixed();
		Fixed(Fixed const &source);
		~Fixed();

		Fixed&					operator=(Fixed const &grd);
		int						getRawBits() const;
		void					setRawBits(int const raw);
};

#endif
