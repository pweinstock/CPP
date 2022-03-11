/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:11:49 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/10 15:21:31 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const &point);
	~Point(void);

	Point	&operator=(Point const &point);

	Fixed	getx(void) const;
	Fixed	gety(void) const;
	
	private:
	Fixed	const x;
	Fixed	const y;
};

# endif