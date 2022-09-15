/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:28:58 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/16 02:22:00 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{}
MateriaSource &MateriaSource::operator = (const MateriaSource &materiaSource)
{}
MateriaSource::~MateriaSource()
{}
void MateriaSource::learnMateria(AMateria*)
{}
AMateria *MateriaSource::createMateria(std::string const & type)
{}


