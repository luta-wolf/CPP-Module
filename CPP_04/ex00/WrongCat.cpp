/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:52:19 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/12 00:03:39 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Defoult constructor called" << std::endl;
	_type = "type WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Denstructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->_type = copy._type;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat: operator= called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Miaw Miaw" << std::endl;
}
