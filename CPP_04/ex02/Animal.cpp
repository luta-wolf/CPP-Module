/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:18:30 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/13 00:14:54 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Defoult constructor called" << std::endl;
	_type = "unknown type";
	_brain = nullptr;
}

Animal::~Animal()
{
	std::cout << "Animal: Denstructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal: operator= called" << std::endl;
	if(this == &copy)
		return *this;

	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal cannot talk" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::addIdea(std::string idea)
{
	if(_brain != nullptr)
		_brain->addIdea(idea);
}

void Animal::fogetIdea(void)
{
	if(_brain != nullptr)
		_brain->fogetIdea();
}

void Animal::printIdeas()
{
	if(_brain != nullptr)
		_brain->printIdeas();
}
