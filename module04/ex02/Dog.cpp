/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:40:40 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/17 12:28:32 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	Animal::setType("Dog");
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "Dog assignment operator called" << std::endl;
	Animal::setType(dog.Animal::getType());
	this->brain = dog.brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << getType() << " bow wow" << std::endl;
}
