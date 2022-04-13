/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:29:30 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/08 11:27:54 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	Conversion test = Conversion(argv[1]);

	std::cout << test << std::endl;
	return (0);
}
