/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:47 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 19:48:39 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>
# include <math.h>

class Fixed
{
	private:
		int					_point;
		static const int	_nb_bits = 8;

	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif
