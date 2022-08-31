/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:29:15 by einterdi          #+#    #+#             */
/*   Updated: 2022/08/31 23:38:38 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int		main()
{
	PhoneBook	pbook;
	std::string	input;

	while(1)
	{
		std::cout << "Введите команду: ";
		std::cin >> input;

		if (input == "ADD")
			pbook.AddContact();
		else if (input == "SEARCH")
			pbook.SearchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Неверный ввод" << std::endl;
			
		clearerr(stdin);
        std::cin.clear();
	}

	return 0;
}
