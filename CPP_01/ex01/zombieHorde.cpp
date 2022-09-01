/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:23:59 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 00:00:22 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie *arr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		arr[i].setName(name);
		arr[i].announce();
	}

	return arr;
}
