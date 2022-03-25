/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:23:00 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/18 12:54:41 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
	Ice(void);
	Ice(const Ice &ice);
	~Ice(void);

	Ice	&operator=(const Ice &ice);

	virtual AMateria* clone() const;
	void use(ICharacter& target);
};

# endif