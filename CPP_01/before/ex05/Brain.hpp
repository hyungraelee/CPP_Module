#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	private :
		std::string	size;
	public:
		Brain();
		~Brain();
		Brain	*identify(void);
};

#endif
