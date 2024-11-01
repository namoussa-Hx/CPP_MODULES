#include "Point.hpp"

static float area (const Point p1, const Point p2, const Point p3)
{
	float	area;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	area =	(
			( p1.getX().toFloat() * ( p2.getY().toFloat() - p3.getY().toFloat() ) )
			+ ( p2.getX().toFloat() * ( p3.getY().toFloat() - p1.getY().toFloat() ) )
			+ ( p3.getX().toFloat() * ( p1.getY().toFloat() - p2.getY().toFloat() ) )
			)
			/ 2;

	if (area >= 0)
		return (area);
	else
		return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float T0, T1, T2, T3;
	bool ret_val = false;
  
	T0 = area(a, b, c);
	T1 = area(point, a, b);
	T2 = area(point, b, c);
	T3 = area(point, a, c);

	if ( T1 == 0 || T2 == 0 || T3 == 0)
		ret_val = false;
	else if ( T1 + T2 + T3 == T0 )
		ret_val = true;

	return (ret_val);
}

