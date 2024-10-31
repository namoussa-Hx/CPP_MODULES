#ifndef POINT_HPP
#define POINT_HPP


#include "Fixed.hpp"
#include <string>
#include <iostream>
class Point 
{
	private:
		Point& operator=(const Point& other);
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point& other);
		~Point();

		Fixed getX() const;
		Fixed getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif