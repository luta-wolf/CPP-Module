/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:23:45 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 22:06:43 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{

}

Point::Point(float x, float y)
{
	_point_x.setRawBits(x);
	_point_y.setRawBits(y);
}
Point::~Point()
{

}

Point::Point(Point const &copy)
{
	*this = copy;
}
Point &Point::operator=(Point const &copy)
{
	if (this == &copy)
		return *this;
	_point_x = copy.getPointX();
	_point_y = copy.getPointY();
	return *this;
}
Fixed Point::getPointX( void ) const
{
	return _point_x;
}
Fixed Point::getPointY( void ) const
{
	return _point_y;
}
