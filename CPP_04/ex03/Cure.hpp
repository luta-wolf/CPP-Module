/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:00 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/16 01:54:32 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		~Cure();
		Cure(Cure const &copy);
		Cure &operator=(Cure const &copy);

		AMateria *clone() const;
		void use(ICharacter& target);
};
