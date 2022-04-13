/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:55:41 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/31 16:19:00 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
	Bureaucrat();
	Bureaucrat(std:: string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &bureaucrat);

	const std::string	getName() const;
	int	getGrade() const;

	void increment();
	void decrement();

	void	signForm(Form &form);
	void	executeForm(Form const & form);

	class	GradeTooHighException : public std::exception
	{
		virtual const char	*what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char	*what() const throw();
	};

	private:
	const std::string	name;
	int	grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

# endif