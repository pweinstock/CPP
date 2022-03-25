/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:55:57 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/16 16:59:44 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal
{
	public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &animal);
	virtual ~Animal(void);

	Animal	&operator=(const Animal &animal);

	void	setType(std::string type);
	std::string	getType(void) const;

	virtual void	makeSound(void) const;

	protected:
	std::string	type;
};

# endif