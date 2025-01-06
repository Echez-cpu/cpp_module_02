#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &source);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		Fixed&	operator=(Fixed const &original_copy);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int					value;
		static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& output, Fixed const &original_copy);

#endif


// naming convention #define _FIXED_HPP_
