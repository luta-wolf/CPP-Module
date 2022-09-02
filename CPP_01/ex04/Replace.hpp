/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:31:58 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 14:45:26 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string.h>

class Replace
{
	private:

	public:
		Replace();
		~Replace();

		std::string my_replace(std::string line, std::string str1, std::string str2);

};

#endif
