/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:15:38 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/11 19:41:53 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	clapper("clapper");

	clapper.attack("slapper");
	clapper.takeDamage(5);
	clapper.beRepaired(5);
	return (0);
}