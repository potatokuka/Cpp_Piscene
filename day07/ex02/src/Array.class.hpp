/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 21:38:25 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 21:38:26 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

template<typename T>
class Array{
	public:
		Array() : _array(NULL), _n(0){}
		Array(unsigned int n) : _array(new T[n]()), _n(n) {}
		~Array(){
			if (this->_array != NULL)
				delete [] this->_array;
		}
		Array(Array const &src) : _array(NULL), _n(0){
			*this = src;
		}
		Array const &operator=(Array const &rhs){
			if (this == &rhs)
				return (*this);
					if	(this->size() != rhs.size()){
						if (this->_array != NULL)
							delete [] this->_array;
						this->_array = new T[rhs.size()];
					}
			this->_n = rhs.size();
			for (size_t i = 0; i < rhs.size(); i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}
		T &operator[](size_t i) const{
			if (!this->_array || i < 0 || i >= this->_n)
				throw std::exception();
			return (this->_array[i]);
		}
		unsigned int size() const{
			return (this->_n);
		}
	private:
		T *_array;
		unsigned int _n;

};

#endif
