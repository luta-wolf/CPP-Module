/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:59:32 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/04 21:26:27 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}
