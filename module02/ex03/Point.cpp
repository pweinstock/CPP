/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:18:07 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/10 16:35:19 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : x(x), y(y)
{
	//std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const &point) : x(point.getx()), y(point.gety())
{
	//std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Point	&Point::operator=(Point const &point)
{
	(Fixed)this->x = point.getx();
	(Fixed)this->y = point.gety();
	return (*this);
}

Fixed	Point::getx(void) const
{
	return (this->x);
}

Fixed	Point::gety(void) const
{
	return (this->y);
}
