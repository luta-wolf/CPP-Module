/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:18:27 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/12 23:22:46 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
		Brain		*_brain;


	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &copy);
		virtual Animal &operator=(Animal const &copy);

		virtual void makeSound() const;
		std::string getType() const;
		void addIdea(std::string idea);
		void fogetIdea(void);
		void printIdeas();
};

#endif
