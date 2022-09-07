/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:59:41 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/04 19:10:39 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name)
{
	_name = name;
	_weapon = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	if (_weapon == nullptr)
		return;
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
