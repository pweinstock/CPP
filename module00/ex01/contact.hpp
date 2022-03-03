/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:13:04 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/23 12:21:19 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
	std::string	getfirst_name();
	std::string	getlast_name();
	std::string	getnickname();
	std::string	getphonenumber();
	std::string	getdarkest_secret();

	void		setfirst_name(std::string str);
	void		setlast_name(std::string str);
	void		setnickname(std::string str);
	void		setphonenumber(std::string str);
	void		setdarkest_secret( std::string str);

	Contact();
	~Contact();

	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string darkest_secret;
};

# endif
