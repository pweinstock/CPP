/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:58:01 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/12 12:08:25 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;
	tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}


# endif