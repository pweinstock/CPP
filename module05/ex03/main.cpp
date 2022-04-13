/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:58:56 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/01 17:10:38 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (!rrf)
		return (0);

	Bureaucrat john = Bureaucrat("John", 42);

	try {
		rrf->beSigned(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		rrf->execute(john);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	john.executeForm(*rrf);


	delete rrf;
	return (0);
}