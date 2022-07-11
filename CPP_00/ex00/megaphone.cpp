/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:24:55 by einterdi          #+#    #+#             */
/*   Updated: 2022/07/12 01:06:44 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	// для оператора cout
#include <cstring>	// для функции strlen

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < strlen(argv[i]); j++)
				std::cout << (char)toupper(argv[i][j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}

