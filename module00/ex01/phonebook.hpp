/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:50:44 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/16 19:23:53 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class contact
{
	public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string darkest_secret;
	contact();
	~contact();
};

class phonebook
{
	contact contacts[8];
	public:
	void add(void);
	void search(void);
	phonebook();
	~phonebook();
	private:
	std::string display_list(std::string str);
	std::string truncate(std::string str);
	void display_contact(contact &contact);
};

# endif