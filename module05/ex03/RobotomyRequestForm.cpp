/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:34:41 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/31 17:46:46 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("default", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << "RobotomyRequestForm name constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;

	Form::operator=(copy);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw NotSignedException();
	else if (this->getExecute() < executor.getGrade())	
		throw GradeTooLowException();
	else 
	{
		std::cout << "*** drilling noises ***" << std::endl;
		srand(time(NULL));
		if(rand() %2)
			std::cout << this->getName() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "robotomy has failed" << std::endl;
	}
}
