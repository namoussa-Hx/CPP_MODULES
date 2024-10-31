
#include "Point.hpp"

Point::Point(void): x(Fixed()), y(Fixed())
{

}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y))
{

}

Point::Point(const Fixed x, const Fixed y): x(x), y(y)
{

}

Point::~Point(void)
{
    
}

Point::Point(const Point& other)
{
    *this = other;
}

Fixed Point::getX(void) const
{
    return (this->x);
}

Fixed Point::getY(void)const
{
    return (this->y);
}

Point &Point::operator=(const Point& other)
{
    (void)other;
 return (*this);
}
