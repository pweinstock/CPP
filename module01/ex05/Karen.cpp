/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:56:54 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/02 11:57:34 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <string>

Karen::Karen(void)
{
	std::cout << "construct Karen" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "destruct Karen" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	typedef	void(Karen::*funcptr[])(void);
	funcptr	messages = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (unsigned long i = 0; i < sizeof(levels) / sizeof(std::string); i++)
	{
		if (levels[i] == level)
			(this->*messages[i])();
	}
}