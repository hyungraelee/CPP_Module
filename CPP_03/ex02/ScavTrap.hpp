#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public :
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap& c);
	ScavTrap& operator=(const ScavTrap& c);
	void guardGate();
};

#endif
