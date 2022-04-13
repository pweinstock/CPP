/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:47:37 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/15 11:56:06 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->hitpoints = 100;
	this->energypoints = 100;
	this->attackdamage = 30;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 100;
	this->attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = fragtrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

const FragTrap	&FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "FragTrap Assignemt operator called" << std::endl;
	this->name = fragtrap.name;
	this->hitpoints = fragtrap.hitpoints;
	this->energypoints = fragtrap.energypoints;
	this->attackdamage = fragtrap.attackdamage;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
	if (this->energypoints > 0)
		this->energypoints -= 1;
	std::cout << this->name << ": holds " << this->energypoints << " enerypoints" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " ヘ( ^o^)ノ＼(^_^ )" << std::endl;
}