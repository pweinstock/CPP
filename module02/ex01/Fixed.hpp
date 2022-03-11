/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:47:08 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/09 15:48:00 by pweinsto         ###   ########.fr       */
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

	private:
	int					value;
	static const int	fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed);

# endif