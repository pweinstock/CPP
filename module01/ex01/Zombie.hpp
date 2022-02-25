/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:36:10 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/24 16:31:45 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
	void	announce(void);
	void	set_name(std::string name);
	std::string	get_name(void);
	Zombie();
	~Zombie();

	private:
	std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

# endif