/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:42:08 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/25 17:51:24 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->name = Weapon::setType(weapon);
	std::cout << "create weapon" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "destroy weapon" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}
