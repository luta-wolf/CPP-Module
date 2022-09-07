/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:24:19 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/04 21:24:05 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	// {Zombie zombie1;}

	randomChump( "Vasia" );

	Zombie *zombie2;
	zombie2 = newZombie("Sweta");
	delete zombie2;

	return 0;
}
