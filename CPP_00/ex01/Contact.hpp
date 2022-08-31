/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:23:04 by einterdi          #+#    #+#             */
/*   Updated: 2022/08/31 23:45:14 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();

		void		createContact();
		std::string &getFirstname();
		std::string &getLastname();
		std::string &getNickname();
		std::string &getPhoneNumber();
		std::string &getDarkestSecret();
};

#endif
