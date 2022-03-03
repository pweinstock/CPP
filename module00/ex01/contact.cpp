/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:10:20 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/23 12:22:49 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "create contact" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "delete contact" << std::endl;
}

std::string	Contact::getfirst_name()
{
	return this->first_name;
}

std::string	Contact::getlast_name()
{
	return this->last_name;
}

std::string	Contact::getnickname()
{
	return this->nickname;
}

std::string	Contact::getphonenumber()
{
	return this->phonenumber;
}

std::string	Contact::getdarkest_secret()
{
	return this->darkest_secret;
}

void	Contact::setfirst_name(std::string str)
{
	this->first_name = str;
}

void	Contact::setlast_name(std::string str)
{
	this->last_name = str;
}

void	Contact::setnickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setphonenumber(std::string str)
{
	this->phonenumber = str;
}

void	Contact::setdarkest_secret(std::string str)
{
	this->darkest_secret = str;
}
