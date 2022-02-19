/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:16:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/18 15:29:21 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

contact::contact(void)
{
	std::cout << "create contact" << std::endl;
}

contact::~contact(void)
{
	std::cout << "delete contact" << std::endl;
}

phonebook::phonebook(void)
{
	std::cout << "create phonebook" << std::endl;
}

phonebook::~phonebook(void)
{
	std::cout << "delete phonebook" << std::endl;
}

std::string	phonebook::field_input(std::string field)
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
	int	index;

	index = 0;
	while (index <= 7 && this->contacts[index].getfirst_name().length())
		index++;
	fields[0] = field_input("first name: ");
	fields[1] = field_input("last name: ");
	fields[2] = field_input("nickname: ");
	fields[3] = field_input("phone number: ");
	fields[4] = field_input("darkest secret: ");
	if (index == 8)
		index = 7;
	this->contacts[index].setfirst_name(fields[0]);
	this->contacts[index].setlast_name(fields[1]);
	this->contacts[index].setnickname(fields[2]);
	this->contacts[index].setphonenumber(fields[3]);
	this->contacts[index].setdarkest_secret(fields[4]);
}

std::string	phonebook::truncate(std::string str)
{
	str.erase(str.begin()+9, str.end());
	str.replace(str.end(), str.end(), ".");
	return (str);
}

std::string	phonebook::display_list(std::string str)
{
	if (str.length() >= 11)
		return (truncate(str));
	else
		return (str);
}

void	phonebook::display_contact(contact &contact)
{
	std::cout << "first name:	" << contact.getfirst_name() << std::endl;
	std::cout << "last name:	" << contact.getlast_name() << std::endl;
	std::cout << "nickname:	" << contact.getnickname() << std::endl;
	std::cout << "phone number:	" << contact.getphonenumber() << std::endl;
	std::cout << "darkest secret:	" << contact.getdarkest_secret() << std::endl;
}

bool	phonebook::is_number(std::string str)
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
	int i;
	std::string index;

	i = 0;
	while(i <= 7 && this->contacts[i].getfirst_name().length())
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		std::cout << std::setw(10);
		std::cout << display_list(this->contacts[i].getfirst_name()) << "|";
		std::cout << std::setw(10);
		std::cout << display_list(this->contacts[i].getlast_name()) << "|";
		std::cout << std::setw(10);
		std::cout << display_list(this->contacts[i].getnickname()) << "|" << std::endl;
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
