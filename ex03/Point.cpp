Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {} // inner "x,y" are of Fixed class

Point::Point(Point const &original_copy) {
	*this = original_copy;
}

Point::~Point() {}

Point & Point::operator=(Point const &rhSide) {
	if (this != &rhSide)
		new (this)Point(rhSide.getX().toFloat(), rhSide.getY().toFloat());
	return *this;
}

std::ostream&	operator<<(std::ostream &output, Point const &rSym) {
	output << "x:(" << rSym.getX() << "); y:(" << rSym.getY() << ");";
	return output;
}

// Getters

Fixed const	Point::getX() const {
	return this->x;
}

Fixed const	Point::getY() const {
	return this->y;
}
