/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:31:56 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/16 19:07:41 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
	Cat(void);
	Cat(const Cat &cat);
	~Cat(void);

	Cat	&operator=(const Cat &cat);

	void	makeSound(void) const;

	private:
	Brain	*brain;
};

# endif