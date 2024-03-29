/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:18:19 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 16:07:02 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my" <<
		" 7XL-double-cheese-triple-pickle-special- " <<
		"ketchup burger.I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money." <<
		"You didn’t put enough bacon in my burger! If you did, " <<
		"I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. " <<
		"I’ve been coming for years whereas you started working " <<
		"here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! " <<
	"I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	// Создаем массив ключей
	std::string choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// Создаем массив УКАЗАТЕЛЕЙ на функции
	void (Harl::*functinon[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	// Делаем выбор
	for (int i = 0; i < 4; i++)
	{
		if (level == choice[i])
		{
			(this->*functinon[i])(); // Вызаваем функцию из массива
			return;
		}
	}
	std::cout << "Wrong input" << std::endl;
}
