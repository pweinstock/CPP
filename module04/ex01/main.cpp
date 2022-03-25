/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:11:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/25 14:49:08 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();
			std::cout << "------------------------------" << std::endl;
		}
		else
		{
			animals[i] = new Cat();
			std::cout << "------------------------------" << std::endl;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		std::cout << "------------------------------" << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << "------------------------------" << std::endl;
	}
	
	return (0);
}
