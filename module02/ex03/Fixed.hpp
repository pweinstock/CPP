/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:47:08 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/09 19:48:00 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed&	operator=(const Fixed &fixed);
	bool	operator>(const Fixed &fixed);
	bool	operator<(const Fixed &fixed);
	bool	operator>=(const Fixed &fixed);
	bool	operator<=(const Fixed &fixed);
	bool	operator==(const Fixed &fixed);
	bool	operator!=(const Fixed &fixed);
	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed);
	Fixed	operator*(const Fixed &fixed);
	Fixed	operator/(const Fixed &fixed);
	Fixed	operator++(void);
	Fixed	operator++(int);

	Fixed&	min(Fixed &a, Fixed &b);
	const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&	max(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);

	private:
	int					value;
	static const int	fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed);

# endif