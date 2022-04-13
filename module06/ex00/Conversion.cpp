/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:32:00 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/06 20:09:23 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iostream>
#include <iomanip>
#include <regex>
#include <limits>

Conversion::Conversion(void) : c(0), i(0), f(0), d(0)
{
	std::cout << "default constructor called" << std::endl;
}

Conversion::Conversion(std::string literal) : literal(literal), c(0), i(0), f(0), d(0)
{
	std::cout << "literal constructor called" << std::endl;
	convert(this->literal);
}

Conversion::Conversion(const Conversion &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

Conversion::~Conversion(void)
{
	std::cout << "destructor called" << std::endl;
}

Conversion &Conversion::operator=(const Conversion &copy)
{
	std::cout << "copy assignment operator called" << std::endl;
	this->literal = copy.literal;
	this->c = copy.get_c();
	this->i = copy.get_i();
	this->f = copy.get_f();
	this->d = copy.get_d();
	return *this;
}

bool	Conversion::is_char(std::string literal)
{
	std::regex	char_regex("[a-zA-Z]");
	return std::regex_match(literal, char_regex);
}

bool	Conversion::is_int(std::string literal)
{
	std::regex	int_regex("-?[0-9]+");
	return std::regex_match(literal, int_regex);
}

bool	Conversion::is_float(std::string literal)
{
	std::regex	float_regex("-?[0-9]+.[0-9]+f");
	return std::regex_match(literal, float_regex);
}

bool	Conversion::is_double(std::string literal)
{
	std::regex	double_regex("-?[0-9]+.[0-9]+");
	return std::regex_match(literal, double_regex);
}

void	Conversion::convert_from_char(std::string literal)
{
	this->c = literal[0];
	this->i = static_cast<int>(this->c);
	this->f = static_cast<float>(this->c);
	this->d = static_cast<double>(this->c);
}

void	Conversion::convert_from_int(std::string literal)
{
	try
	{
		this->i = std::stoi(literal);
		this->c = static_cast<char>(this->i);
		this->f = static_cast<float>(this->i);
		this->d = static_cast<double>(this->i);
	}
	catch (std::exception &e)
	{
		set_nan();
	}
}

void	Conversion::convert_from_float(std::string literal)
{
	try
	{
		this->f = std::stof(literal);
		this->c = static_cast<char>(this->f);
		this->i = static_cast<int>(this->f);
		this->d = static_cast<double>(this->f);	
	}
	catch (std::exception &e)
	{
		set_nan();
	}
}

void	Conversion::convert_from_double(std::string literal)
{
	try
	{
		this->d = std::stod(literal);
		this->c = static_cast<char>(this->d);
		this->i = static_cast<int>(this->d);
		this->f = static_cast<float>(this->d);
	}
	catch (std::exception &e)
	{
		set_nan();
	}
}

void	Conversion::set_neg_inf(void)
{
	this->f = -std::numeric_limits<float>::infinity();
	this->d = -std::numeric_limits<double>::infinity();
}

void	Conversion::set_pos_inf(void)
{
	this->f = std::numeric_limits<float>::infinity();
	this->d = std::numeric_limits<double>::infinity();
}

void	Conversion::set_nan(void)
{
	this->i = std::numeric_limits<int>::min();
	this->f = std::numeric_limits<float>::quiet_NaN();
	this->d = std::numeric_limits<double>::quiet_NaN();
}

void	Conversion::convert(std::string literal)
{
	if (is_char(literal))
		convert_from_char(literal);
	else if (is_int(literal))
		convert_from_int(literal);
	else if (is_float(literal))
		convert_from_float(literal);
	else if (is_double(literal))
		convert_from_double(literal);
	else if (literal == "-inff" || literal == "-inf")
		set_neg_inf();
	else if (literal == "inff" || literal == "inf")
		set_pos_inf();
	else
		set_nan();
}

char	Conversion::get_c(void) const
{
	return this->c;
}

int		Conversion::get_i(void) const
{
	return this->i;
}

float	Conversion::get_f(void) const
{
	return this->f;
}

double	Conversion::get_d(void) const
{
	return this->d;
}

std::ostream	&operator<<(std::ostream &out, const Conversion &conversion)
{
	if (isprint(conversion.get_c()))
		out << "char: " << "'" << conversion.get_c() << "'" << "\n";
	else if (conversion.get_c())
		out << "char: " << "Non displayable" << "\n";
	else
		out << "char: " << "impossible" << "\n";
	if (conversion.get_i() == std::numeric_limits<int>::min())
		out << "int: " << "impossible" << "\n";
	else
		out << "int: " << conversion.get_i() << "\n";
	out << std::fixed << std::setprecision(1);
	out << "float: " << conversion.get_f() << "f" << "\n";
	out << "double: " << conversion.get_d();
	return out;
}