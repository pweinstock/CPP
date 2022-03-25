/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:09:21 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/24 11:25:41 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
	Character();
	Character(std::string name);
	Character(const Character &character);
	~Character();

	Character	&operator=(const Character &character);

	virtual std::string	const & getName() const;

	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

	private:
	std::string	name;
	AMateria	*items[4];
	AMateria	*leftitems[42];
};

# endif