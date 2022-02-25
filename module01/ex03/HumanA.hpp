/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:51:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/25 18:02:15 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string.h>

class	HumanA
{	
	Weapon	weapon;
	std::string	name;
	void	attack(void);
	
	HumanA(std::string type);
	~HumanA();
};

# endif