/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:48:49 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/02 17:12:46 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	Zombie*	ZombieHorde = zombieHorde(N, "Foo");
	if (!ZombieHorde)
		return (1);

	for (int i = 0; i < N; i++)
		ZombieHorde[i].announce();
	delete[] ZombieHorde;
	return (0);
}
