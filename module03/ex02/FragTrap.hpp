/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:43:13 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/15 11:54:21 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
	FragTrap(void);
	FragTrap(const std::string name);
	FragTrap(const FragTrap &fragtrap);
	~FragTrap(void);

	const FragTrap	&operator=(const FragTrap &fragtrap);

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

# endif