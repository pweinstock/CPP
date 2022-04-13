/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:58:56 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/01 16:45:33 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--------first test--------\n";
	Bureaucrat newbie = Bureaucrat("new", 50);
	try {
		Form formula = Form("work", 0, 50);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n--------second test--------\n";
	Form form = Form("workload", 90, 90);
	std::cout << form << std::endl;
	try {
		form.beSigned(newbie);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << form << std::endl;

	std::cout << "\n--------third test--------\n";
	std::cout << newbie << std::endl;
	Form president = Form("top secret", 1, 1);
	std::cout << president << std::endl;
	try {
		president.beSigned(newbie);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << president << std::endl;

	std::cout << "\n--------fourth test--------\n";
	std::cout << form << std::endl;
	newbie.signForm(form);
	std::cout << form << std::endl;

	return (0);
}