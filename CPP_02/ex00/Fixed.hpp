/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:47 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 18:36:33 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
	private:
		int _point;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
