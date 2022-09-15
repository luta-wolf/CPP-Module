/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:09 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/16 01:58:35 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "unknown type";
}
Cure::Cure(std::string const &type)
{
	_type = type;
}
Cure::~Cure(){}

Cure::Cure(Cure const &copy)
{
	this->_type = copy._type;
}
Cure &Cure::operator=(Cure const &copy)
{
	this->_type = copy._type;
	return *this;
}
AMateria *Cure::clone() const
{
	return new Cure();
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
