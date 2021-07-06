#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP

#include <iostream>

class Zombie {
	private :
		std::string	type;
		std::string	name;
	public :
		Zombie();
		~Zombie();
		void	setType(std::string type);
		void	setName(std::string name);
		void	announce(void);
};

#endif
