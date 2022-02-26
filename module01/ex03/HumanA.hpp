/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:51:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/26 18:32:47 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string.h>

class	HumanA
{	
	public:
	Weapon	weapon;
	std::string	name;
	void	attack(void);
	HumanA(std::string type, Weapon);
	~HumanA();
};

# endif