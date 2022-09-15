/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:12 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/16 01:56:51 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		~Ice();
		Ice(Ice const &copy);
		Ice &operator=(Ice const &copy);

		AMateria *clone() const;
		void use(ICharacter& target);
};
