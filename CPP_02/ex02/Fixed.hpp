#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private :
		int	value;
		static const int fractionalBits = 8;
	public :
		Fixed();
		Fixed(const int c);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		bool operator>(const Fixed& c);
		bool operator<(const Fixed& c);
		bool operator>=(const Fixed& c);
		bool operator<=(const Fixed& c);
		bool operator==(const Fixed& c);
		bool operator!=(const Fixed& c);
		Fixed operator+(const Fixed& c);
		Fixed operator-(const Fixed& c);
		Fixed operator*(const Fixed& c);
		Fixed operator/(const Fixed& c);
		Fixed& operator++();		// pre-increment
		Fixed operator++(int);	// post-increment
		Fixed& operator--();		// pre-decrement
		Fixed operator--(int);	// post-decrement
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed& min(Fixed& a, Fixed &b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed &b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
