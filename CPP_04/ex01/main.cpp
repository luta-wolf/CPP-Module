/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:12:04 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/12 00:13:20 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;//should not create a leak delete i;
delete i;

return 0;
}

