/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:44:00 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/31 17:45:08 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
	Form(void);
	Form(std::string name, const int sign, const int execute);
	Form(const Form &form);
	~Form(void);

	Form	&operator=(const Form &form);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSign(void) const;
	int			getExecute(void) const;

	void	beSigned(const Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	class NotSignedException : public std::exception
	{
		const char* what() const throw();
	};

	private:
	const std::string	name;
	bool	_signed;
	const int	sign;
	const int	exec;
	

};

std::ostream & operator<<(std::ostream &out, const Form &f);

# endif