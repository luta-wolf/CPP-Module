/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:59:51 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 01:23:04 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
	private:
		Weapon();
		std::string _type;

	public:
		Weapon(std::string const &type);
		~Weapon();

		std::string const &getType() const;
		void setType(std::string const &type);
};

#endif
