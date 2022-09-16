/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:29:01 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/17 01:59:41 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_store[4];
		int			_size;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiaSource);
		MateriaSource &operator = (const MateriaSource &materiaSource);
		~MateriaSource();

		void learnMateria(AMateria *materiaSource) ;
		AMateria* createMateria(std::string const & type);
};

#endif
