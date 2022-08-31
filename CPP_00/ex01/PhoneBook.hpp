/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:23:23 by einterdi          #+#    #+#             */
/*   Updated: 2022/08/31 22:17:16 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define COUNT_N 8

#include <iostream>
# include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int current_contact;
		Contact arr[COUNT_N];
		void 	getInfo();
		int 	printPhonebook();
		void 	printAtributW10(std::string & atribut);

	public:
		PhoneBook();
		~PhoneBook();

		void	AddContact();
		void	SearchContact();

};

#endif
