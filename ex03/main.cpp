#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main() {
	Point	a(2.02f, 0.83f);
	Point	b(2.66f, 1.68f);
	Point	c(1.24f, 1.91f);
	Point	p(2.07f, 1.46f);

	if (bsp(a, b, c, p) == true)
		std::cout << "The point is inside the triangle." << std::endl;   // zero means it is on the line
	else
		std::cout << "The point is a vertex or on the edge or outside the traingle." << std::endl;
	return 0;
}
