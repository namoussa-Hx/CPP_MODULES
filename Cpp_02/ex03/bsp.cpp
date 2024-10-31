#include "Point.hpp"



// 	Fixed side(const Point a, const Point b, const Point c) 
//     {
// 		//(p2.getY() - p1.getY()) * (p.getX() - p1.getX()) p, p1,p2
		
//    return (c.getY() - b.getY()) * (a.getX() - b.getX()) - (b.getX() - c.getX() ) * (b.getY() - a.getY());
// 	}


Fixed side(const Point a, const Point b, const Point c) 
    {
		//(p2.getY() - p1.getY()) * (p.getX() - p1.getX()) p, p1,p2
		
   return ((c.getY() - a.getY()) * (b.getX() - a.getX()) - (c.getX() - a.getX() ) * (b.getY() - a.getY()));
	}


bool bsp(const Point a, const Point b, const Point c, const Point point) 
{
	

 side(point, a, b);
 side(point, b, c);
 side(point, c, a);


}

