/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:26:21 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/01 17:19:26 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &copy)
{
	std::cout << "Intern assignment operator called" << std::endl;
	(void)copy;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form	*pointer = NULL;
	std::string	targets[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*forms[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

	for (int i = 0; i < 3; i++)
	{
		if (name == targets[i])
			pointer = forms[i];
		else
			delete forms[i];
	}
	if (pointer)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (pointer);
	}
	std::cout << name << " does not excist" << std::endl;
	return (pointer);
}
