/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:59:48 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 01:27:33 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	_type = type;
}

Weapon::~Weapon()
{

}

std::string const &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string const &type)
{
	_type = type;
}
