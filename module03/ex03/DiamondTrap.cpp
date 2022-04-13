/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:40:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/15 16:42:28 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->hitpoints = FragTrap::hitpoints;
	this->energypoints = ScavTrap::energypoints;
	this->attackdamage = FragTrap::attackdamage;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energypoints = ScavTrap::energypoints;
	this->attackdamage = FragTrap::attackdamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = diamondtrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

const DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "DiamondTrap Assignemt operator called" << std::endl;
	this->name = diamondtrap.name;
	this->hitpoints = diamondtrap.hitpoints;
	this->energypoints = diamondtrap.energypoints;
	this->attackdamage = diamondtrap.attackdamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->name << "\nClapTrap " << this->ClapTrap::name << std::endl;
}