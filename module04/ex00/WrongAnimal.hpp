/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:46:22 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/16 17:12:48 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class	WrongAnimal
{
	public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &wronganimal);
	virtual ~WrongAnimal(void);

	WrongAnimal	&operator=(const WrongAnimal &wronganimal);

	void	setType(std::string type);
	std::string	getType(void) const;

	void	makeSound(void) const;

	protected:
	std::string	type;
};

# endif