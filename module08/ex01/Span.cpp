/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:00:17 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/21 15:45:16 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include "Span.hpp"

Span::Span(void)
{
	std::cout << "default constructor called" << std::endl;
}

Span::Span(unsigned int N) : N(N)
{
	std::cout << "N constructor called" << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

Span::~Span(void)
{
	std::cout << "default constructor called" << std::endl;
}

Span	&Span::operator=(const Span &copy)
{
	std::cout << "copy assignment operator called";
	this->N = copy.N;
	this->v = copy.v;
	return *this;
}

bool	Span::operator==(const Span &copy)
{
	return this->v == copy.v;
}

void	Span::addNumber(int i)
{
	if (this->v.size() >= N)
		throw FullSpanException();
	else
		this->v.push_back(i);
}

void	Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	if (end - begin > this->N)
		throw FullSpanException();
	else
		this->v.assign(begin, end);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->v.size() <= 1)
		throw NoSpanException();
	sort(this->v.begin(), this->v.end());
	int diff = INT_MAX;
	for (unsigned int i = 0; i < this->v.size() - 1; i++)
		diff = std::min(diff, this->v[i+1] - this->v[i]);
	return diff;
}

unsigned int	Span::longestSpan(void)
{
	if (this->v.size() <= 1)
		throw NoSpanException();
	int max = *max_element(this->v.begin(), this->v.end());
	int min = *min_element(this->v.begin(), this->v.end());
	return abs(max - min);
}