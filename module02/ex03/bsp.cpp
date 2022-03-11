/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:52:04 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/10 16:34:07 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point a, Point b, Point c)
{
	return abs((a.getx().toFloat()*(b.gety().toFloat()-c.gety().toFloat()) + b.getx().toFloat()*(c.gety().toFloat()-a.gety().toFloat())+ c.getx().toFloat()*(a.gety().toFloat()-b.gety().toFloat()))/2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	/* Calculate area of triangle ABC */
	float A = area (a, b, c);

	/* Calculate area of triangle PBC */ 
	float A1 = area (point, b, c);

	/* Calculate area of triangle PAC */ 
	float A2 = area (a, point, c);

	/* Calculate area of triangle PAB */  
	float A3 = area (a, b, point);
	
	/* Check if sum of A1, A2 and A3 is same as A */
	return (A == A1 + A2 + A3);
}