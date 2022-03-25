/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:50:24 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/17 11:52:16 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	std::cout << "Copy assignment operator called" << std::endl;
	for (unsigned long i = 0; i < sizeof(brain.ideas)/sizeof(*brain.ideas); i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}
