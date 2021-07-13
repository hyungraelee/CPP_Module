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
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
