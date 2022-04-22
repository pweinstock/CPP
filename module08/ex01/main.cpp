/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:58:48 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/21 15:46:29 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span test1 = Span(100000);

	for (int i = 0; i < 100000; i++)
	{
		test1.addNumber(i);
	}
	
	try
	{
		std::cout << test1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << test1.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Span test2 = Span(100000);

	std::vector<int>	vec;
	for (int i = 0; i < 100000; i++)
	{
		vec.push_back(i);
	}

	try
	{
		test2.addNumber(vec.begin(), vec.end());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	if (test1 == test2)
		std::cout << "both arrays are equal" << std::endl;
	else
		std::cout << "both arrays are not equal" << std::endl;

	return 0;
}