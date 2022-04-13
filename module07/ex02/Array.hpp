/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:59:56 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/12 17:02:11 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class	Array
{
	public:
	Array(void)
	{
		std::cout << "default constructor called" << std::endl;
		this->s = 0;
		this->arr = new T[this->s];
	}
	Array(unsigned int n)
	{
		std::cout << "array constructor called" << std::endl;
		this->s = n;
		this->arr = new T[this->s];
	}
	Array(const Array &copy)
	{
		std::cout << "copy constructor called" << std::endl;
		*this = copy;
	}
	~Array(void)
	{
		std::cout << "destructor called" << std::endl;
		delete this->arr;
	}

	Array	&operator=(const Array &copy)
	{
		std::cout << "copy assignment operator called" << std::endl;
		this->s = copy.s;
		//delete	this->arr;
		this->arr = new T[this->s];
		for (unsigned int i = 0; i < this->s; i++)
			this->arr[i] = copy.arr[i];
		return *this;
	}

	unsigned int	size(void)
	{
		return this->s;
	}

	T &operator[](unsigned int index)
	{
		if (index >= this->s)
			throw OutOfBoundsException();
		else
			return this->arr[index];
	}

	class	OutOfBoundsException : public std::exception
	{
		const char *what() const throw()
		{
			return "index is out of bounds";
		}
	};

	private:
	T	*arr;
	unsigned int	s;
};

# endif