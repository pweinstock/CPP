/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:05:14 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/25 14:12:25 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

int	main(void)
{
	std::cout << "\n########### MateriaSource #############" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << "\n########### ME #############" << std::endl;
	ICharacter* me = new Character("me");
	
	std::cout << "\n########### AMateria *tmp #############" << std::endl;
	AMateria*   tmp;
	std::cout << "########### 1 #############" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "########### 2 #############" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "########### 3 UNEQUIP #############" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(2);
	
	std::cout << "\n########### BOB #############" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "########### BOB 1 #############" << std::endl;
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	bob->unequip(5);
	bob->unequip(1);
	bob->unequip(0);
	
	std::cout << "\n########### DESTRUCTORS #############" << std::endl;
	std::cout << "\n########### DESTRUCTORS BOB #############" << std::endl;
	delete bob;
	std::cout << "\n########### DESTRUCTORS ME #############" << std::endl;
	delete me;
	std::cout << "\n########### DESTRUCTORS SRC #############" << std::endl;
	delete src;
	
	return (0);
}