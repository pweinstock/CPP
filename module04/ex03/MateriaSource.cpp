/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:49:12 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/25 14:27:13 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	this->items[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = materiasource;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i])
			delete (this->items[i]);
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiasource)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i])
			delete this->items[i];
		this->items[i] = materiasource.items[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->items[i])
		{
			this->items[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i]->getType() == type)
			return (this->items[i]->clone());
	}
	return (nullptr);
}