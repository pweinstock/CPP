/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:57:14 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/21 14:55:38 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

class	NotFoundException : public std::exception
{
	public:
	const char *what() const throw()
	{
		return "no occurrence is found";
	}
};

template<typename T>
typename T::iterator	easyfind(T &t, int i)
{
	typename T::iterator	it = find(t.begin(), t.end(), i);
	if (it == t.end())
		throw NotFoundException();
	return it;
}

# endif