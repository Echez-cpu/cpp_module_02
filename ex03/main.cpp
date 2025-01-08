#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main() {
	Point	a(0.0f, 0.0f);
	 Point	b(10.0f, 30.0f);
	 Point	c(20.0f, 0.0f);
	 Point	p(10.0f, 0.1f);

	if (bsp(a, b, c, p) == true)
		 std::cout << "\033[32mThe point is inside the triangle.\033[0m" << std::endl;  
	else
		std::cout << "\033[31mThe point is a vertex or on the edge or outside the traingle.\033[0m" << std::endl;  // zero means it is on the line
	return 0;
}



/*int main() {
    Point a(2.02f, 0.83f);
    Point b(2.66f, 1.68f);
    Point c(1.24f, 1.91f);

    Point testPoints[] = {
        Point(2.07f, 1.46f), // Inside
        Point(1.75f, 1.50f), // Inside
        Point(2.25f, 1.30f), // Inside
        Point(2.50f, 2.00f), // Outside
        Point(0.50f, 1.50f), // Outside
        Point(3.00f, 0.50f), // Outside
        Point(1.63f, 1.37f), // Edge (CA)
        Point(2.02f, 0.83f), // Vertex A
        Point(2.66f, 1.68f), // Vertex B
        Point(1.24f, 1.91f)  // Vertex C
    };

    for (int i = 0; i < 12; i++) {
        if (bsp(a, b, c, testPoints[i]))
            std::cout << "\033[32mPoint " << i + 1 << " is inside the triangle.\033[0m" << std::endl;
        else
            std::cout << "\033[31mPoint " << i + 1 << " is outside the triangle.\033[0m" << std::endl;
    }

    return 0;
}*/

