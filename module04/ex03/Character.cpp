/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:00:55 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/25 14:25:35 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->items[i] = nullptr;
	for (int i = 0; i < 42; i++)
		this->leftitems[i] = nullptr;
}

Character::Character(std::string name) : name(name)
{
	std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->items[i] = nullptr;
	for (int i = 0; i < 42; i++)
		this->leftitems[i] = nullptr;
}

Character::Character(const Character &character)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = character;
}

Character::~Character(void)
{
	std::cout << "Character  destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i])
			delete this->items[i];
		this->items[i] = nullptr;
	}
	for (int i = 0; i < 42; i++)
	{
		if (this->leftitems[i])
			delete this->leftitems[i];
		this->leftitems[i] = nullptr;
	}
}

Character	&Character::operator=(const Character &character)
{
	std::cout << "Character copy assignment operator called";

	for (int i = 0; i < 4; i++)
	{
		if (this->items[i])
			delete this->items[i];
		this->items[i] = character.items[i]->clone();
	}
	for (int i = 0; i < 42; i++)
	{
		if (this->leftitems[i])
			delete this->leftitems[i];
		this->leftitems[i] = character.leftitems[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i] == nullptr)
		{
			this->items[i] = m;
			std::cout << "Add " << m->getType() << " on the " << i+1 << "'s slot of the inventory" << std::endl;
			return ;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (this->items[idx])
	{
		std::cout << this->getName() << " unequipe " << this->items[idx]->getType() << " from items" << std::endl;
		for (int i = 0; i < 42; i++)
		{
			if (!this->leftitems[i])
			{
				this->leftitems[i] = items[idx];
				break ;
			}
		}
		this->items[idx] = nullptr;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->items[idx])
		this->items[idx]->use(target);
}
