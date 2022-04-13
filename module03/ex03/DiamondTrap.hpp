/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:17:02 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/15 16:43:42 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	DiamondTrap(void);
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &diamondtrap);
	~DiamondTrap(void);

	const DiamondTrap	&operator=(const DiamondTrap &diamondtrap);

	void	attack(const std::string& target);
	void	whoAmI(void);

	private:
	std::string	name;
};

# endif