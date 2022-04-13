/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:28:15 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/31 17:46:56 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	std::cout << "PresidentialPardonForm name constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;

	Form::operator=(copy);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw NotSignedException();
	else if (this->getExecute() < executor.getGrade())	
		throw GradeTooLowException();
	else 
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
