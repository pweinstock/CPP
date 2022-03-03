/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:18:43 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/01 14:22:11 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string.h>

class	HumanB
{	
	public:
	void	attack(void);
	void	setWeapon(Weapon& weapon);
	HumanB(std::string name);
	~HumanB();

	private:
	std::string	name;
	Weapon	*weapon;
};

# endif
