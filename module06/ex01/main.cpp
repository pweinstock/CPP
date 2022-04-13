/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:26:25 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/08 12:29:15 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data	*data = new Data;
	Data	*test;
	uintptr_t	ptr;

	data->x = 42;
	data->y = 13;

	std::cout << "before " << "\nx: " << data->x << "\ny: " << data->y << std::endl;
	std::cout << "data: " << data << std::endl;

	ptr = serialize(data);
	std::cout << "ptr: " << ptr << std::endl;
	test = deserialize(ptr);

	std::cout << "after " << "\nx: " << test->x << "\ny: " << test->y << std::endl;
	std::cout << "test: " << test << std::endl;
	delete data;
	return 0;
}