/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:42:27 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/22 11:08:50 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : hitpoints(10), energypoints(10), attackdamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energypoints(10), attackdamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

const ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Assignemt operator called" << std::endl;
	this->name = claptrap.name;
	this->hitpoints = claptrap.hitpoints;
	this->energypoints = claptrap.energypoints;
	this->attackdamage = claptrap.attackdamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	if (this->energypoints > 0)
		this->energypoints -= 1;
	std::cout << this->name << ": holds " << this->energypoints << " enerypoints" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (amount >= this->hitpoints)
		this->hitpoints = 0;
	else
		this->hitpoints -= amount;
	std::cout << this->name << ": holds " << this->hitpoints << " hitpoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " repaires " << amount << " hit points!" << std::endl;
	if (this->energypoints > 0)
		this->energypoints -= 1;
	this->hitpoints += amount;
	std::cout << this->name << ": holds " << this->hitpoints << " hitpoints and " << this->energypoints << " enerypoints" << std::endl;
}
