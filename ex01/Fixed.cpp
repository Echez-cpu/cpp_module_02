#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->value = n << bits;
}

Fixed::Fixed(const float f) : value(f) {
	std::cout << "Float constructor called" << std::endl;   // redundant : value(f) just testing
	this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &original_copy) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &original_copy)
		this->value = original_copy.getRawBits();
	return *this;          // Chained assignments allow you to write code like a = b = c;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float	Fixed::toFloat() const {
	return (float)this->value / (float)(1 << bits);
}

int		Fixed::toInt() const {
	return this->value >> bits;
}

std::ostream&	operator<<(std::ostream& o, Fixed const &original_copy) {   // Returning the output stream by reference allows us to chain multiple << operations together
	o << original_copy.toFloat();
	return o;
}
