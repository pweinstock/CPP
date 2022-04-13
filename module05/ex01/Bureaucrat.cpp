/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:30:01 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/30 18:57:45 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : name("nobody"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat name constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrate copy constructor called" << std::endl;
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	this->grade = bureaucrat.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (out);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increment(void)
{
	if (this->getGrade() <= 1)
		throw GradeTooHighException();
	else
		this->grade--;
	std::cout << this->getName() << " increment grade to " << this->getGrade() << std::endl;
}

void	Bureaucrat::decrement(void)
{
	if (getGrade() >= 150)
		throw GradeTooLowException();
	else
		this->grade++;
	std::cout << getName() << " decrement grade to " << getGrade() << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return("GradeTooLowException");
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}