/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:11:58 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/11 19:38:15 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPP_HPP
# define SCAVTRAPP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	~ScavTrap(void);

	const ScavTrap	&operator=(const ScavTrap &scavtrap);

	void	attack(const std::string& target);
	void	guardGate(void);
};

# endif