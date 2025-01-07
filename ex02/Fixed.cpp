
#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(Fixed const &source) {
	*this = source;
}

Fixed::Fixed(const int n) {
	this->value = n << bits;
}

Fixed::Fixed(const float f) : value(f) {
	this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed() {
}

Fixed&	Fixed::operator=(Fixed const &original_copy) {
	if (this != &original_copy)
		this->value = original_copy.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &rhSide) const {
	return Fixed(this->toFloat() + rhSide.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhSide) const {
	return Fixed(this->toFloat() - rhSide.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhSide) const {
	return Fixed(this->toFloat() * rhSide.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhSide) const {
	return Fixed(this->toFloat() / rhSide.toFloat());
}

bool	Fixed::operator<(Fixed const &compareTo) const {
	if (this->getRawBits() < compareTo.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const &compareTo) const {
	if (this->getRawBits() > compareTo.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const &compareTo) const {
	if (this->getRawBits() <= compareTo.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const &compareTo) const {
	if (this->getRawBits() >= compareTo.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const &compareTo) const {
	if (this->getRawBits() == compareTo.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const &compareTo) const {
	if (this->getRawBits() != compareTo.getRawBits())
		return true;
	return false;
}

Fixed&	Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	operator--();
	return tmp;
}

int		Fixed::getRawBits() const {
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

Fixed &	Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return a;
	return b;
}

std::ostream&	operator<<(std::ostream& output, Fixed const &fixedDigit) {
	output << fixedDigit.toFloat();
	return output;
}
