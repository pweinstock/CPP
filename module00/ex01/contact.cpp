/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:10:20 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/18 15:22:58 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	contact::getfirst_name()
{
	return this->first_name;
}

std::string	contact::getlast_name()
{
	return this->last_name;
}

std::string	contact::getnickname()
{
	return this->nickname;
}

std::string	contact::getphonenumber()
{
	return this->phonenumber;
}

std::string	contact::getdarkest_secret()
{
	return this->darkest_secret;
}

void	contact::setfirst_name(std::string str)
{
	this->first_name = str;
}

void	contact::setlast_name(std::string str)
{
	this->last_name = str;
}

void	contact::setnickname(std::string str)
{
	this->nickname = str;
}

void	contact::setphonenumber(std::string str)
{
	this->phonenumber = str;
}

void	contact::setdarkest_secret(std::string str)
{
	this->darkest_secret = str;
}
