/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:52:41 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/16 16:53:38 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	WrongCat(const WrongCat &wrongcat);
	~WrongCat(void);

	WrongCat	&operator=(const WrongCat &wrongcat);

	void	makeSound(void) const;
};

# endif