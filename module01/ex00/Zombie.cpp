/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:17:22 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/24 15:25:08 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "create Zombie" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "destroy " << Zombie::get_name() << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}
