#include "Point.hpp"

static float calculate_area(const Point p1, const Point p2, const Point p3)
{
	float	res;

	res =	(
			( p1.getX().toFloat() * ( p2.getY().toFloat() - p3.getY().toFloat() ) )
			+ ( p2.getX().toFloat() * ( p3.getY().toFloat() - p1.getY().toFloat() ) )
			+ ( p3.getX().toFloat() * ( p1.getY().toFloat() - p2.getY().toFloat() ) )
			)
			/ 2;

	if (res >= 0)
		return (res);
	else
		return (res * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float T0, T1, T2, T3;
	bool res = false;
  
	T0 = calculate_area(a, b, c);
	T1 = calculate_area(point, a, b);
	T2 = calculate_area(point, b, c);
	T3 = calculate_area(point, a, c);
   
   std::cout << "t0 :" << T0 << std::endl;
   std::cout << "t1: " <<  T1 << std::endl;
   std::cout << "t2 : " <<  T2 << std::endl;
   std::cout << "t3 : " << T3 << std::endl;
	if ( T1 == 0 || T2 == 0 || T3 == 0)
		res = false;
	else if ( T1 + T2 + T3 == T0 )
		res = true;

	return (res);
}

