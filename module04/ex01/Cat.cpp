/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:01:52 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/17 12:24:56 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	Animal::setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(const Cat &cat)
{
	std::cout << "Cat assignment operator called" << std::endl;
	Animal::setType(cat.Animal::getType());
	this->brain = cat.brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << getType() << " meow" << std::endl;
}
