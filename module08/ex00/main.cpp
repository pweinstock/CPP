/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:56:18 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/21 14:53:26 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	
	int	array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> v(array, array + sizeof(array) / sizeof(int));

	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	char	carray[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	std::vector<char> c(carray, carray + sizeof(carray) / sizeof(char));

	try
	{
		std::cout << *easyfind(c, 'e') << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
