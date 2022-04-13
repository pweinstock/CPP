/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:15:38 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/15 11:55:39 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	clapper("clapper");

	clapper.attack("slapper");
	clapper.takeDamage(5);
	clapper.beRepaired(5);
	clapper.highFivesGuys();
	return (0);
}