/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:12:04 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/13 00:56:52 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL	2
#define YLW		"\033[33m"
#define END		"\033[0m"

int main()
{
	Animal *animal[ANIMAL];
	std::cout << YLW"---------- Create Cats and Dogs ----------"END << std::endl;
	for (int i = 0; i < ANIMAL; i++)
	{
		if (i < ANIMAL / 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << "(" << i <<  ") " << animal[i]->getType() << " ";
		animal[i]->makeSound();
		std::cout << "(" << i <<  ") " << animal[i] << std::endl;
	}

	std::cout << YLW"---------- Make ideas ----------"END << std::endl;
	animal[0]->addIdea("Sleep");
	animal[0]->addIdea("Eat");
	animal[0]->addIdea("Play");
	animal[0]->addIdea("Run");
	animal[0]->addIdea("WC");
	animal[0]->printIdeas();
	std::cout << "-------------------" << std::endl;
	animal[0]->fogetIdea();
	animal[0]->printIdeas();

	std::cout << YLW"---------- Оператор присваивания ----------"END << std::endl;
	std::cout << animal[0]->getType() << " " << animal[0]  << std::endl;
	std::cout << animal[1]->getType() << " " << animal[1]  << std::endl;
	*(animal[1]) = *(animal[0]);
	std::cout << animal[0]->getType() << " " << animal[0]  << std::endl;
	std::cout << animal[1]->getType() << " " << animal[1]  << std::endl;
	animal[1]->printIdeas();

	std::cout << YLW"---------- Delete Cats and Dogs ----------"END << std::endl;
	for (int i = 0; i < ANIMAL; i++)
	{
		std::cout << "(" << i <<  ") " << animal[i]->getType() << std::endl;
		delete animal[i];
	}

	std::cout << YLW"---------- Оператор копирования ----------"END << std::endl;
	Cat cat = Cat();
	cat.addIdea("Sleep");
	cat.addIdea("Eat");
	cat.printIdeas();
	Cat cat2(cat);
	cat2.printIdeas();

	std::cout << YLW"--------------------"END << std::endl;

	return 0;
}

