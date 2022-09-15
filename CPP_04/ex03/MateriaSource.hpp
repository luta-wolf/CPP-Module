/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:29:01 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/16 02:20:11 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_store[4];
		MateriaSource();

	public:
		MateriaSource(const MateriaSource &materiaSource);
		MateriaSource &operator = (const MateriaSource &materiaSource);
		~MateriaSource() {}

		void learnMateria(AMateria*) ;
		AMateria* createMateria(std::string const & type);
};
