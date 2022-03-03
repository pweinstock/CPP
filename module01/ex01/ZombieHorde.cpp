/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:32:54 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/02 17:08:14 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cerr << "A zombieHorde cannot have <= 0 number of members..." << std::endl;
		return (NULL);
	}
	
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}
