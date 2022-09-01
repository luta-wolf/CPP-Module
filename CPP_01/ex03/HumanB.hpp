/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:59:21 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 01:58:55 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB
{
	private:
		HumanB();
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB(std::string const &name);
		~HumanB();

        void attack();
		void setWeapon(Weapon &weapon);
};

#endif
