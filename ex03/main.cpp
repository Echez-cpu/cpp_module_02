#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main() {
	Point	a(0.0f, 0.0f);
	 Point	b(10.0f, 30.0f);
	 Point	c(20.0f, 0.0f);
	 Point	p(10.0f, 0.1f);

	if (bsp(a, b, c, p) == true)
		 std::cout << "\033[32mThe point is inside the triangle.\033[0m" << std::endl;  // zero means it is on the line
	else
		std::cout << "\033[31mThe point is a vertex or on the edge or outside the traingle.\033[0m" << std::endl;
	return 0;
}


           Point	a(0.0f, 0.0f);
	// Point	b(10.0f, 30.0f);
	// Point	c(20.0f, 0.0f);
	// Point	p(20.0f, 0.1f);
