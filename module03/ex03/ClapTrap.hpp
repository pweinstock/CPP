/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:00:46 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/29 12:52:19 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class	ClapTrap
{
	public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &claptrap);
	~ClapTrap(void);

	const ClapTrap &operator=(const ClapTrap &claptrap);
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	unsigned int			getHitPoints() const;
	unsigned int			getEnergyPoints() const;
	unsigned int			getAttackDamage() const;
	
	protected:
	std::string	name;
	unsigned int	hitpoints;
	unsigned int	energypoints;
	unsigned int	attackdamage;
};

# endif