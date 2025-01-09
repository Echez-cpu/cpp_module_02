/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:05:39 by pokpalae          #+#    #+#             */
/*   Updated: 2025/01/09 12:07:49 by pokpalae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &source);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		Fixed&			operator=(Fixed const &original_copy);
		Fixed			operator+(Fixed const &rhSide) const;
		Fixed			operator-(Fixed const &rhSide) const;
		Fixed			operator*(Fixed const &rhSide) const;
		Fixed			operator/(Fixed const &rhSide) const;
		bool			operator<(Fixed const &compareTo) const;
		bool			operator>(Fixed const &compareTo) const;
		bool			operator<=(Fixed const &compareTo) const;
		bool			operator>=(Fixed const &compareTo) const;
		bool			operator==(Fixed const &compareTo) const;
		bool			operator!=(Fixed const &compareTo) const;
		Fixed&			operator++();
		Fixed			operator++(int);
		Fixed&			operator--();
		Fixed			operator--(int);

		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat() const;
		int				toInt() const;
		
		static Fixed &			min(Fixed &a, Fixed &b);
		static Fixed const &	min(Fixed const &a, Fixed const &b);
		static Fixed &			max(Fixed &a, Fixed &b);
		static Fixed const &	max(Fixed const &a, Fixed const &b);

	private:
		int					value;
		static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& output, Fixed const &fixedDigit); // overloading "<<" to customize it function

#endif
