/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:31:05 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/09 19:47:57 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = i << this->fractional_bits;
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << this->fractional_bits));
}

Fixed::Fixed(Fixed const &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const
{
	return ((int)this->value >> this->fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fractional_bits));
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

bool	Fixed::operator>(const Fixed &fixed)
{
	return (this->value > fixed.value);
}

bool	Fixed::operator<(const Fixed &fixed)
{
	return (this->value < fixed.value);
}

bool	Fixed::operator>=(const Fixed &fixed)
{
	return (this->value >= fixed.value);
}

bool	Fixed::operator<=(const Fixed &fixed)
{
	return (this->value <= fixed.value);
}

bool	Fixed::operator==(const Fixed &fixed)
{
	return (this->value == fixed.value);
}

bool	Fixed::operator!=(const Fixed &fixed)
{
	return (this->value != fixed.value);
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() * fixed.getRawBits() / (1 << this->fractional_bits));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() / fixed.getRawBits() * (1 << this->fractional_bits));
	return (tmp);
}


Fixed	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}
