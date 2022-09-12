/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:29:18 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/13 00:23:26 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Defoult constructor called" << std::endl;
	_type = "type Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat: Denstructor called" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miaw Miaw" << std::endl;
}

