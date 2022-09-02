/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:23:55 by einterdi          #+#    #+#             */
/*   Updated: 2022/09/02 22:05:25 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed tmp_a;
	Fixed tmp_b;
	Fixed tmp_c;

	tmp_a =  (a.getPointX() - point.getPointX()) * (b.getPointY() - a.getPointY()) - (b.getPointX() - a.getPointX()) * (a.getPointY() - point.getPointY());
	tmp_b =  (b.getPointX() - point.getPointX()) * (c.getPointY() - b.getPointY()) - (c.getPointX() - b.getPointX()) * (b.getPointY() - point.getPointY());
	tmp_c =  (c.getPointX() - point.getPointX()) * (a.getPointY() - c.getPointY()) - (a.getPointX() - c.getPointX()) * (c.getPointY() - point.getPointY());

	if ((tmp_a > 0 && tmp_b > 0 && tmp_c > 0) || (tmp_a < 0 && tmp_b < 0 && tmp_c < 0))
		return 1;
	return 0;
}
