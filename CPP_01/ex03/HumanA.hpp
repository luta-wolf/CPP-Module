/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:59:37 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 01:56:00 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA
{
	private:
		HumanA();
		std::string _name;
		Weapon *_weapon;

	public:
		HumanA(std::string const &name, Weapon &weapon);
		~HumanA();

        void attack();
};

#endif
