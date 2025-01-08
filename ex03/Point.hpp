#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &source);
		~Point();

		Point &	operator=(Point const &original_copy);
		
		Fixed const	getX() const;
		Fixed const	getY() const;
		
	private:
		Fixed const	x;
		Fixed const	y;
};

std::ostream&	operator<<(std::ostream &output, Point const &pointObj);

#endif
