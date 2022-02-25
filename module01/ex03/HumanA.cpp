/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:56:10 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/25 18:13:45 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon::weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.type << std::endl;
}
