/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:38:16 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/25 15:17:27 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiasource);
	~MateriaSource();

	MateriaSource	&operator=(const MateriaSource &materiasource);

	void	learnMateria(AMateria *materia);
	AMateria* createMateria(std::string const & type);

	private:
	AMateria	*items[4];
};

# endif