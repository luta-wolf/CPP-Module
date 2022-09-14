/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:22:02 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/14 21:29:36 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		~AMateria();
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &copy);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
