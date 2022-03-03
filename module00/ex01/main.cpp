/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:35:07 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/23 12:20:38 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	command;

	while (!std::cin.eof())
	{
		std::cout << "Type 'ADD' to save a new contact" << std::endl;
		std::cout << "Type 'SEARCH' to display a specific contact" << std::endl;
		std::cout << "Type 'EXIT' to quit" << std::endl;
		std::cin >> command;
		if (std::cin.eof())
			break;
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break;
		else
			std::cout << command << ": no such command" << std::endl;
	}
	return (0);
}
