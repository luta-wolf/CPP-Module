/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:07:26 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/01 23:57:25 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();

		void announce( void );
		void setName(std::string name);
};

Zombie *zombieHorde( int N, std::string name );

#endif
