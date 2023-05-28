/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:25:14 by etachott          #+#    #+#             */
/*   Updated: 2023/05/27 21:29:14 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define END "\033[0m"

class Point {
    Fixed   _x;
    Fixed   _y;

    public:
        Point();
        Point(float x, float y);
        Point(const Point &rhs);
        Point &operator=(const Point &rhs);
        ~Point();

        float getX(void) const;
        float getY(void) const;

        bool operator==(const Point &rhs) const;
};

bool    bsp( Point const a, Point const b, Point const c, Point const point );
#endif
