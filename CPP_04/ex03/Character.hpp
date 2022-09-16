/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:28:42 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/17 01:56:30 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*_inventory[4];
		std::string	_name;

	public:
		Character();
		Character(std::string const &name);
		~Character();
		Character(Character const &copy);
		Character &operator=(Character const &copy);

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
