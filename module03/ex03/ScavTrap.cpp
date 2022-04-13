/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:22:39 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/11 19:57:53 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hitpoints = 100;
	this->energypoints = 50;
	this->attackdamage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 50;
	this->attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

const ScavTrap	&ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap Assignemt operator called" << std::endl;
	this->name = scavtrap.name;
	this->hitpoints = scavtrap.hitpoints;
	this->energypoints = scavtrap.energypoints;
	this->attackdamage = scavtrap.attackdamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	if (this->energypoints > 0)
		this->energypoints -= 1;
	std::cout << this->name << ": holds " << this->energypoints << " enerypoints" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode" << std::endl;
}