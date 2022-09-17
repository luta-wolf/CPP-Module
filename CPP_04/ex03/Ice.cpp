/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:15 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/17 03:04:13 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}
Ice::Ice(std::string const &type)
{
	_type = type;
}
Ice::~Ice(){}

Ice::Ice(Ice const &copy)
{
	this->_type = copy._type;
}
Ice &Ice::operator=(Ice const &copy)
{
	this->_type = copy._type;
	return *this;
}
AMateria *Ice::clone() const
{
	return new Ice();
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
