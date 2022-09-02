/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:44 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/03 01:06:44 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap Hobbit("Hobbit");
	ClapTrap Mordor("Mordor");
	Hobbit.attack("Mordor");
	Mordor.takeDamage(2);
	Mordor.beRepaired(1);

	std::cout << "-------------" << std::endl;
	ScavTrap Hobbit2("Hobbit2");
	ScavTrap Mordor2("Mordor2");
	Hobbit2.attack("Mordor2");
	Mordor2.takeDamage(2);
	Mordor2.beRepaired(1);
	Hobbit2.guardGate();
	Mordor2.guardGate();

	std::cout << "-------------" << std::endl;
	FragTrap Hobbit3("Hobbit3");
	FragTrap Mordor3("Mordor3");
	Hobbit3.attack("Mordor3");
	Mordor3.takeDamage(25);
	Mordor3.beRepaired(33);
	Hobbit3.highFivesGuys();
	Mordor3.highFivesGuys();

	std::cout << "-------------" << std::endl;
	DiamondTrap Hobbit4("Hobbit4");
	DiamondTrap Mordor4("Mordor4");
	Hobbit4.attack("Mordor4");
	Mordor4.takeDamage(10);
	Mordor4.beRepaired(15);
	Hobbit4.whoAmI();
	Mordor4.whoAmI();

	return 0;
}
