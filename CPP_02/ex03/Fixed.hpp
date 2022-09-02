/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:54:47 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 20:10:50 by einterdi         ###   ########.fr       */
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

	Fixed& operator++(void);	// Пре Инкремент
	Fixed operator++(int);		// Пост Инремент
	Fixed& operator--(void);	// Прие Декремент
	Fixed operator--(int);		// Пост Декремент

	Fixed operator+(Fixed const &fixed);	// Оператор сложения
	Fixed operator-(Fixed const &fixed);	// Оператор вычитания
	Fixed operator*(Fixed const &fixed);	// Оператор умножения
	Fixed operator/(Fixed const &fixed);	// Оператор деления

	bool operator>(Fixed const &fixed) const;	// оператор >
	bool operator<(Fixed const &fixed) const;	// оператор <
	bool operator>=(Fixed const &fixed) const;	// оператор >=
	bool operator<=(Fixed const &fixed) const;	// оператор <=
	bool operator==(Fixed const &fixed) const;	// оператор ==
	bool operator!=(Fixed const &fixed) const;	// оператор !=

	static Fixed& min(Fixed &a, Fixed &b);						// обычный min
	static Fixed& max(Fixed &a, Fixed &b);						// обычный max
	static const Fixed&  min(const Fixed &a, const Fixed &b);	// min, принимающий константые значения
	static const Fixed&  max(const Fixed &a, const Fixed &b);	// max, принимающий константые значения
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif
