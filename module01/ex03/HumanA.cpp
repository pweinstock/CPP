/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:56:10 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/26 18:35:17 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon) : weapon(weapon), name(name)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.type << std::endl;
}
