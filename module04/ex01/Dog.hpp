/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:39:22 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/17 12:28:47 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
	Dog(void);
	Dog(const Dog &dog);
	~Dog(void);

	Dog	&operator=(const Dog &Dog);

	void	makeSound(void) const;

	private:
	Brain	*brain;
};

# endif