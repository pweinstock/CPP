/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:16:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/16 19:20:19 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>


contact::contact(void)
{
	std::cout << "create contacts" << std::endl;
}

contact::~contact(void)
{
	std::cout << "delete contacts" << std::endl;
}

phonebook::phonebook(void)
{
	std::cout << "create phonebook" << std::endl;
}

phonebook::~phonebook(void)
{
	std::cout << "delete phonebook" << std::endl;
}

std::string	field_input(std::string field)
{
	std::string	input;

	if (!std::cin.eof())
	{
		std::cout << field << std::endl;
		std::cin >> input;
	}
	return (input);
}

void	phonebook::add(void)
{
	std::string fields[5];
	int	index = 0;
	while (this->contacts[index].first_name.length() && index <= 7)
		index++;
	fields[0] = field_input("first name: ");
	fields[1] = field_input("last name: ");
	fields[2] = field_input("nickname: ");
	fields[3] = field_input("phone number: ");
	fields[4] = field_input("darkest secret: ");
	if (index == 8)
		index = 7;
	this->contacts[index].first_name = fields[0];
	this->contacts[index].last_name = fields[1];
	this->contacts[index].nickname = fields[2];
	this->contacts[index].phonenumber = fields[3];
	this->contacts[index].darkest_secret = fields[4];
}

std::string phonebook::truncate(std::string str)
{
	str.erase(str.begin()+9, str.end());
	str.replace(str.end(), str.end(), ".");
	return (str);
}

std::string phonebook::display_list(std::string str)
{
	if (str.length() >= 11)
		return (truncate(str));
	else
		return (str);
}

void	phonebook::display_contact(contact &contact)
{
	std::cout << "first name:	" << contact.first_name << std::endl;
	std::cout << "last name:	" << contact.last_name << std::endl;
	std::cout << "nickname:	" << contact.nickname << std::endl;
	std::cout << "phone number:	" << contact.phonenumber << std::endl;
	std::cout << "darkest secret:	" << contact.darkest_secret << std::endl;
}

bool is_number(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) == 0)
			return false;
	}
	return true;
}

void	phonebook::search(void)
{
	int i = 0;
	std::string index;

	while(this->contacts[i].first_name.length() && i <= 7)
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setw(10);
		std::cout << display_list(this->contacts[i].first_name) << "|";
		std::cout << std::setw(10);
		std::cout << display_list(this->contacts[i].last_name) << "|";
		std::cout << std::setw(10);
		std::cout << display_list(this->contacts[i].nickname) << "|" << std::endl;
		i++;
	}
	if (i == 0)
	{
		std::cout << "no contact created yet" << std::endl;
		return ;
	}
	while (42)
	{
		std::cout << "enter the index of the desired contact" << std::endl;
		std::cin >> index;
		if (std::cin.eof())
			return ;
		if (!is_number(index) || std::stoi(index) > i-1)
			std::cout << index << ": is not an existing index" << std::endl;
		else
			break;
	}
	display_contact(this->contacts[std::stoi(index)]);
}

int	main(void)
{
	phonebook	phonebook;
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
