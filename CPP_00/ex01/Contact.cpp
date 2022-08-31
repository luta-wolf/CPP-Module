/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:23:15 by einterdi          #+#    #+#             */
/*   Updated: 2022/08/31 23:38:11 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::createContact()
{
	std::cout << "Введите first_name: ";
	std::cin >> first_name;

	std::cout << "Введите last_name: ";
	std::cin >> last_name;

	std::cout << "Введите nickname: ";
	std::cin >> nickname;

	std::cout << "Введите phone_number: ";
	std::cin >> phone_number;

	std::cout << "Введите darkest_secret: ";
	std::cin >> darkest_secret;
}

std::string &Contact::getFirstname()
{
	return first_name;
}

std::string &Contact::getLastname()
{
	return last_name;
}

std::string &Contact::getNickname()
{
	return nickname;
}

std::string &Contact::getPhoneNumber()
{
	return phone_number;
}

std::string &Contact::getDarkestSecret()
{
	return darkest_secret;
}
