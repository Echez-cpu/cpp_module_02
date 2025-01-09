/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:08:36 by pokpalae          #+#    #+#             */
/*   Updated: 2025/01/09 12:08:39 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {} // inner "x,y" are of Fixed class

//Point::Point(Point const &original_copy) {
	//*this = original_copy;
//}

Point::Point(Point const &source) : x(source.x), y(source.y) {} // had to tweak and initialize this myself because of the const restraint


Point::~Point() {}

Point & Point::operator=(Point const &original_copy) {
	if (this != &original_copy)
		new (this)Point(original_copy.getX().toFloat(), original_copy.getY().toFloat());
	return *this;
}

std::ostream&	operator<<(std::ostream &output, Point const &pointObj) {
	output << "x:(" << pointObj.getX() << "); y:(" << pointObj.getY() << ");";
	return output;
}


Fixed const	Point::getX() const {
	return this->x;
}

Fixed const	Point::getY() const {
	return this->y;
}
