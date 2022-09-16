/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:22:02 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/17 01:58:03 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &copy);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		std::string const & getType() const;
};

#endif
