/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:03:19 by pokpalae          #+#    #+#             */
/*   Updated: 2025/01/09 12:13:17 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "\033[32mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed(Fixed const &source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	std::cout << "\033[31mDestructor called\033[0m" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &original_copy) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->value = original_copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw) {
	this->value = raw;
}

