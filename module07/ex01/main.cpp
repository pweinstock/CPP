/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:35:14 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/12 12:48:31 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T &p)
{
	std::cout << p << " ";
}

template<typename T>
void	add32(T &s)
{
	s += 32;
}

int	main(void)
{
	int	int_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(int_array, 10, print);
	std::cout << std::endl;
	iter(int_array, 10, add32);
	iter(int_array, 10, print);
	std::cout << std::endl;

	char	char_array[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	iter(char_array, 10, print);
	std::cout << std::endl;
	iter(char_array, 10, add32);
	iter(char_array, 10, print);
	std::cout << std::endl;
	
	return 0;
}