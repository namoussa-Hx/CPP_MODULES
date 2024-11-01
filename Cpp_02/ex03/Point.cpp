
#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{

}

Point::Point(const float x, const float y):_x(x), _y(y)
{

}

Point::Point(const Point &src): _x(src.getX()), _y(src.getY())
{

}


Point::~Point()
{
	
}


Point &Point::operator=(const Point &src)
{
    (void)src;
    
	return *this;
}

const Fixed	&Point::getX(void)const
{
	return (this->_x);
}

const Fixed	&Point::getY(void)const
{
	return (this->_y);
}

