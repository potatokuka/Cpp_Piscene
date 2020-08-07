/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:40:47 by greed         #+#    #+#                 */
/*   Updated: 2020/08/04 10:40:48 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASTFIND_CLASS_HPP
# define EASTFIND_CLASS_HPP

# include <algorithm>
# include <exception>

template<typename T>
int easyfind(T &src, int i){
	typename T::iterator iter = std::find(src.begin(), src.end(), i);
	if (iter == src.end())
		throw std::exception();
	return (*iter);
}

#endif
