/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:24:19 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/04 16:29:59 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
	std::string brain = "HI THIS IS BRAIN"; // переменная
	std::string brain2 = "HI THIS IS NOT BRAIN"; // переменая
	std::string *stringPTR = &brain;		// указатель
	std::string &stringREF = brain;			// ссылка
	stringPTR = &brain2;	//

	// выводим адреса памяти
	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// выводим значение строковой переменной.
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << "------------------" << std::endl;
	*stringPTR = "aaaa";
	std::cout << brain2 << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "------------------" << std::endl;
	stringREF = "bbbb";
	std::cout << brain << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << &brain << std::endl;
	std::cout << &brain2 << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;


}
