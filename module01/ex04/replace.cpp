/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:44:01 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/03 13:50:07 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(char **argv)
{
	std::string	needle = argv[2];
	std::ifstream	ifs(argv[1]);
	if (!ifs)
		{
			std::cerr << "Error: " << argv[1] << " does not exist" << std::endl;
			return ;
 		}
	std::string	replace = argv[1];
	replace += ".replace";
	std::ofstream	ofs(replace);
	std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));

	if (needle == "")
	{
		ofs << content;
		return ;
	}

	int	start = 0;
	int	found = -1;
	do
	{
		found = content.find(needle, found+1);
		if (found != -1)
		{
			ofs << content.substr(start, found - start) << argv[3];
			start = found + needle.length();
		}
		else
			ofs << content.substr(start, content.length() - start);
	}
	while (found != -1);
	return ;
}