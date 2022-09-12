/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:13:44 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/13 00:33:05 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Defoult constructor called" << std::endl;

	_num_ideas = 0;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::~Brain()
{
	std::cout << "Brain: Denstructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain: Copy constructor called " << this << std::endl;
	this->_num_ideas = copy._num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << "Brain: operator= called" << this << std::endl;
	if(this == &copy)
		return *this;

	this->_num_ideas = copy._num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];

	return *this;
}

void Brain::addIdea(std::string idea)
{
	_ideas[_num_ideas] = idea;
	_num_ideas++;
}

void Brain::fogetIdea(void)
{
	_ideas[_num_ideas] = "";
	_num_ideas--;
}

void Brain::printIdeas()
{
	for (int i = 0; i < _num_ideas; i++)
	{
		std::cout << _ideas[i] << std::endl;
	}
}
