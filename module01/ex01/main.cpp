/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:48:49 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/24 16:56:06 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 3;
	Zombie*	ZombieHorde = zombieHorde(N, "shack");

	for (int i = 0; i < N; i++)
		ZombieHorde[i].announce();
	delete[] ZombieHorde;
	return (0);
}
