#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private :
		int	value;
		static const int	precision = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(Fixed& src);
		Fixed& operator=(Fixed& src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
