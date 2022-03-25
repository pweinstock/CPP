/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:38:59 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/18 12:53:38 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
	Cure(void);
	Cure(const Cure &cure);
	~Cure(void);

	Cure	&operator=(const Cure &cure);

	virtual AMateria* clone() const;
	void use(ICharacter& target);
};

#endif