#include "Point.hpp"
#include "Fixed.hpp"

Fixed	crossProduct(Point const a, Point const b, Point const point) {
	float	first = ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()));
	float	second = ((a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));

	return Fixed(first - second);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	vector_AB = crossProduct(a, b, point);
	Fixed	vector_BC = crossProduct(b, c, point);
	Fixed	vector_CA = crossProduct(c, a, point);

	if (vector_AB > 0 && vector_BC > 0 && vector_CA > 0)
{
  return true;
}
	if (vector_AB < 0 && vector_BC < 0 && vector_CA < 0)
  {
    return true;  
  }
		
	return false;
}
