/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:28:58 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/17 03:05:13 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_size = 0;
	for (int i = 0; i < 4; i++)
		_store[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	_size = 0;
	for (int i = 0; i < 4; i++)
		if (materiaSource._store[i])
			_store[i] = materiaSource._store[i]->clone();
}
MateriaSource &MateriaSource::operator = (const MateriaSource &materiaSource)
{
	if (this == &materiaSource)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (_store[i])
			delete (_store[i]);
		if (materiaSource._store[i])
			_store[i] = materiaSource._store[i]->clone();
	}
	_size = 0;
	return (*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_store[i])
			delete (_store[i]);
}
void MateriaSource::learnMateria(AMateria* materiaSource)
{
	for (int i = 0; i < 4; i++) {
		if (!this->_store[i]) {
			this->_store[i] = materiaSource;
			break;
		}
	}
}
AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_store[i] != nullptr && _store[i]->getType() == type)
			return (_store[i]->clone());
	}
	return (NULL);
}


