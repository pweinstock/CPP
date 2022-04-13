/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:26:01 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/31 17:46:51 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAlPARDONFORM_HPP
# define PRESIDENTIAlPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	~PresidentialPardonForm(void);

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &copy);

	void	execute(Bureaucrat const & executor) const;
};

# endif