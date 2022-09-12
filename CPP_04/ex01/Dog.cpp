/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:29:08 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/12 23:55:28 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Defoult constructor called" << std::endl;
	_type = "type Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog: Denstructor called" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: Gav Gav" << std::endl;
}


