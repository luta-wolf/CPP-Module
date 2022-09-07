/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:44 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/07 15:42:06 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	return 0;
}
