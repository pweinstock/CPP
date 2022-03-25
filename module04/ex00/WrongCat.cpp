/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:53:53 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/16 17:02:03 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	WrongAnimal::setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = wrongcat;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongcat)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	WrongAnimal::setType(wrongcat.WrongAnimal::getType());
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << getType() << " meow" << std::endl;
}
