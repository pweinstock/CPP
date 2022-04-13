/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:58:56 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/01 16:30:13 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--------First test--------\n";
	try
	{
		Bureaucrat test1("1", 400);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------Second test--------\n";
	try
	{
		Bureaucrat test2("2", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--------Third test--------\n";
	try
	{
		Bureaucrat test3("3", 50);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n--------Fourth test--------\n";
	Bureaucrat test4("4", 5);
	std::cout << test4 << std::endl;
	try
	{
		test4.increment();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << test4 << std::endl;

	return (0);
}