/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:50:44 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/18 15:26:44 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>

class phonebook
{
	public:
	void		add(void);
	void		search(void);
	
	phonebook();
	~phonebook();

	private:
	contact contacts[8];

	std::string	display_list(std::string str);
	std::string	truncate(std::string str);
	void		display_contact(contact &contact);
	bool		is_number(std::string str);
	std::string	field_input(std::string field);
};

# endif
