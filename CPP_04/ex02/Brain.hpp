/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:13:41 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/12 19:56:16 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		int			_num_ideas;
		std::string _ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &copy);

		void addIdea(std::string idea);
		void fogetIdea(void);
		void printIdeas();
};

#endif
