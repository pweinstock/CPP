/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:56:18 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/13 14:47:59 by pweinsto         ###   ########.fr       */
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
		std::cout << *easyfind(v, 9) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
