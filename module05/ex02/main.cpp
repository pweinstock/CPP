/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:58:56 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/01 16:56:23 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "------------shrubbery-------------" << std::endl;
	
	Bureaucrat john = Bureaucrat("John", 42);
	ShrubberyCreationForm shrubby = ShrubberyCreationForm("Home");

	try {
		shrubby.beSigned(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		shrubby.execute(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	john.executeForm(shrubby);

	std::cout << "------------robotomy-------------" << std::endl;

	RobotomyRequestForm	robot = RobotomyRequestForm("Robot");
	
	try {
		robot.beSigned(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		robot.execute(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	john.executeForm(robot);

	std::cout << "------------presidential-------------" << std::endl;

	PresidentialPardonForm president = PresidentialPardonForm("President");
	try {
		president.beSigned(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		president.execute(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	john.executeForm(president);
	
	return (0);
}