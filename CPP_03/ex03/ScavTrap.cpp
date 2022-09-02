/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 23:15:47 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/03 01:01:13 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "ScavTrap";
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap()
{

}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_health = copy._health;
	this->_energy = copy._energy;
	this->_attack = copy._attack;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << _name << " Gate keeper mod ON" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	_energy--;
	std::cout << "ScavTrap " << _name << " attacks "
			<< target << ", causing " << _attack
			<< " points of damage!" << std::endl;
}
