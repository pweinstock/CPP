/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:20:21 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/25 17:58:50 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int	main(void)
{
	Weapon club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();

	return (0);
}
