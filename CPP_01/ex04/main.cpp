/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:24:19 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 15:15:44 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>


int main(int argc, char **argv)
{
	if (argc != 4) // проверка на количество аргументов
	{
		std::cout << "\033[31mError: \033[00m" << "Wrong number of arguments" << std::endl;
		return 1;
	}

	std::ifstream in(argv[1]);  // открываем файл на чтение
	if (!in.is_open())
	{
		std::cout << "\033[31mError: \033[00m"  << "File not found" << std::endl;
		return 1;
	}

	std::string line;
	std::getline(in, line, '\0');	// считываем файл в строку
	in.close();						// закрываем файл

	Replace place;					// создаем обект
	std::string line_replace;
	line_replace = place.my_replace(line, argv[2], argv[3]);
	// Чары с чарами складывать нельзя, а стринг с чарами можно, поэтому первый элемент переводим в стринг
	std::string fileout = std::string(argv[1]) + "." + "replace"; // Создаем название нашего файла ()

	std::ofstream out; 				// сооздали поток (файловый дескриптор)
	out.open(fileout);				// открываем файл на запись
	out << line_replace;
	out.close();
	return 0;
}
