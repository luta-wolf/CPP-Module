/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:51:32 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/11 23:59:18 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Defoult constructor called." << std::endl;
	_type = "unknown type";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Denstructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: operator= called." << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I'm WrongAnimal." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}
