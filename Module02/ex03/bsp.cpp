/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:58:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/27 13:42:14 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area(float x1, float y1, float x2, float y2, float x3, float y3) {
	return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point ) {
	Fixed totalArea = area(a.getX(), a.getY(),
						   b.getX(), b.getY(),
						   c.getX(), c.getY());

	Fixed a1 = area(point.getX(), point.getY(),
						   b.getX(), b.getY(),
						   c.getX(), c.getY());

	Fixed a2 = area(a.getX(), a.getY(),
					point.getX(), point.getY(),
					c.getX(), c.getY());

	Fixed a3 = area(a.getX(), a.getY(),
					b.getX(), b.getY(),
					point.getX(), point.getY());

    return (totalArea == a1 + a2 + a3 ? true : false);
}
