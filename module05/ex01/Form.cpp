/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:56:17 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/30 19:08:51 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void) : name("blank"), _signed(false), sign(150), execute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, const int sign, const int execute) : name(name), _signed(false), sign(sign), execute(execute)
{
	std::cout << "Form name constructor called" << std::endl;
	if (sign < 1 || execute < 1)
		throw GradeTooHighException();
	else if (sign > 150 || sign > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &form) : name("blank"), sign(150), execute(150)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = form;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(const Form &form)
{
	this->_signed = form.getSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	out << "Form: " << f.getName() << "\nsigned: " << f.getSigned() << "\ngrade to sign: " << f.getSign() << "\ngrade to execute: " << f.getExecute() << std::endl;
	return (out);
}

std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getSign(void) const
{
	return (this->sign);
}

int	Form::getExecute(void) const
{
	return (this->execute);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->getSign() >= bureaucrat.getGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();

}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return("GradeTooLowException");
}
