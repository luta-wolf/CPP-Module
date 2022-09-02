/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:44 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 23:11:39 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Hobbit("Hobbit");
	ClapTrap Mordor("Mordor");
	Hobbit.attack("Mordor");
	Mordor.takeDamage(2);
	Mordor.beRepaired(1);

	return 0;
}
