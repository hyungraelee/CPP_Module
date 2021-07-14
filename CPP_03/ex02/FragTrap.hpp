#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap& c);
	FragTrap& operator=(const FragTrap& c);
	void highFivesGuys(void);
};

#endif
