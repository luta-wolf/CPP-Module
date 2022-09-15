/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:22:07 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/16 02:00:17 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "unknown type";
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &copy)
{
	_type = copy._type;
}

AMateria &AMateria::operator=(AMateria const &copy)
{
	if(this == &copy)
		return *this;

	this->_type = copy._type;
	return *this;
}

