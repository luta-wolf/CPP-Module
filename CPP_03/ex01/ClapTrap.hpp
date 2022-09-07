/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:19:32 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/07 15:31:18 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack;
		ClapTrap();

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &copy);
		ClapTrap &operator=(ClapTrap const &copy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
