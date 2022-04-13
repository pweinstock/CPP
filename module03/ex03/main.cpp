/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:15:38 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/29 12:53:37 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
int	main(void)
{
	DiamondTrap	clapper("clapper");

	std::cout << "Diam Hit Points (" << clapper.getHitPoints() << ")." << std::endl;
	std::cout << "Diam Energy Points (" << clapper.getEnergyPoints() << ")." << std::endl;
	std::cout << "Diam Attack Damage (" << clapper.getAttackDamage() << ")." << std::endl;
	clapper.attack("slapper");
	clapper.takeDamage(5);
	clapper.beRepaired(5);
	clapper.guardGate();
	clapper.highFivesGuys();
	clapper.whoAmI();

	return (0);
}