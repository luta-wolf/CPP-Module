/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:44 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 21:16:24 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::endl << "=== ++ test ===" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl << "=== min/max ===" << std::endl;
	std::cout << "a:\t" << a << std::endl;
	std::cout << "b:\t" << b << std::endl;
	std::cout << "max:\t" << Fixed::max( a, b ) << std::endl;
	std::cout << "min:\t" << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl << "=== -- test ===" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl << "=== c/d test ===" << std::endl;
	Fixed		c( 100 );
	Fixed		d( 42.42f );
	std::cout << "c:\t" << c << std::endl;
	std::cout << "d:\t" << d << std::endl;
	std::cout << c << " < " << d << ":\t " << (c < d) << std::endl;
	std::cout << c << " > " << d << ":\t " << (c > d) << std::endl;
	std::cout << c << " <= " << d << ":\t " << (c <= d) << std::endl;	std::cout << "a:\t" << a << std::endl;
	std::cout << "b:\t" << b << std::endl;
	std::cout << c << " >= " << d << ":\t " << (c >= d) << std::endl;
	std::cout << c << " == " << d << ":\t " << (c == d) << std::endl;
	std::cout << c << " != " << d << ":\t " << (c != d) << std::endl;
	std::cout << c << " + " << d << ":\t " << (c + d) << std::endl;
	std::cout << c << " - " << d << ":\t " << (c - d) << std::endl;
	std::cout << c << " * " << d << ":\t " << (c * d) << std::endl;
	std::cout << c << " / " << d << ":\t " << (c / d) << std::endl;

	return 0;
}
