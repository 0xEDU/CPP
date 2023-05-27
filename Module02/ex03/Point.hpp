/* Amazing header */

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
};

bool    bsp( Point const a, Point const b, Point const c, Point const point );
#endif
