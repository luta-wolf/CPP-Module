/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:23:49 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 22:08:45 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string.h>
# include <math.h>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed _point_x;
		Fixed _point_y;

	public:
		Point();
		Point(float x, float y);
		~Point();
		Point(Point const &copy);
		Point &operator=(Point const &copy);

		Fixed getPointX( void ) const;
		Fixed getPointY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
