/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:51:03 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/01 12:18:06 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string.h>

class	HumanA
{	
	public:
	void	attack(void);
	HumanA(std::string type, Weapon& weapon);
	~HumanA();

	private:
	std::string	name;
	Weapon&	weapon;
};

# endif