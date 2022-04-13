/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:54:36 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/13 18:06:25 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class	Span
{
	public:
	Span(void);
	Span(unsigned int N);
	Span(const Span &copy);
	~Span(void);

	Span	&operator=(const Span &copy);

	void	addNumber(int i);
	void	addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	unsigned int	longestSpan(void);
	unsigned int	shortestSpan(void);

	class	FullSpanException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return "Span is full";
		}
	};

	class	NoSpanException : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return "No Span can be calculated";
		}
	};

	private:
	unsigned int	N;
	std::vector<int>	v;
	
};

# endif