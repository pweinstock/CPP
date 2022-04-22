/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:26:09 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/22 12:56:36 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack(void);
	MutantStack(MutantStack<T> const &copy);
	~MutantStack(void);

	MutantStack<T>	&operator=(MutantStack<T> const &copy);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void)
	{
		return this->c.begin();
	}

	iterator	end(void)
	{
		return this->c.end();
	}
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "default constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = copy;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "destructor called" << std::endl;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &copy)
{
	std::cout << "copy assignment operator called" << std::endl;
	this->c = copy.c;

	return *this;
}

# endif