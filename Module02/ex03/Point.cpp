/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:24:44 by etachott          #+#    #+#             */
/*   Updated: 2023/05/27 21:30:10 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
    return ;
}

Point::Point(float x, float y) : _x(x), _y(y) {
    return ;
}

Point::Point(const Point &rhs) {
    *this = rhs;
    return ;
}

Point &Point::operator=(const Point &rhs) {
    this->_x = rhs._x;
    this->_y = rhs._y;
	return (*this);
}

Point::~Point() {
    return ;
}

float Point::getX(void) const {
    return (this->_x.toFloat());
}

float Point::getY(void) const {
    return (this->_y.toFloat());
}

bool Point::operator==(const Point &rhs) const {
	if (this->_x.toInt() == rhs._x.toInt() && this->_y.toInt() == rhs._y.toInt())
		return true;
	return false;
}
