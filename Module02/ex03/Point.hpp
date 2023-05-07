/* Amazing header */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    Fixed   _x;
    Fixed   _y;

    public:
        Point();
        Point(float x, float y);
        Point(const Point &rhs);
        Point &operator=(const Point &rhs);
        ~Point();
};

bool    bsp( Point const a, Point const b, Point const c, Point const point );
#endif