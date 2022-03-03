/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:50:44 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/23 12:23:45 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class Phonebook
{
	public:
	void		add(void);
	void		search(void);
	
	Phonebook();
	~Phonebook();

	private:
	Contact contacts[8];

	std::string	display_list(std::string str);
	std::string	truncate(std::string str);
	void		display_contact(Contact &contact);
	bool		is_number(std::string str);
	std::string	field_input(std::string field);
};

# endif
