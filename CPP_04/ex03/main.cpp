/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:12:04 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/17 03:04:42 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"


#define YLW		"\033[33m"
#define END		"\033[0m"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
    me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;

	// MateriaSource src;
	// src.learnMateria(new Cure());
	// AMateria *cure = src.createMateria("cure");
	// delete cure;


	// ICharacter* you = new Character ("Denis");
	// ICharacter* bob = new Character("bob");
	// AMateria *cure = src.createMateria("cure");
	// AMateria *ice = new Ice();
	// you->equip(cure);
	// you->equip(ice);
// 	you->use(0, *bob);
// 	you->use(1, *bob);
}

