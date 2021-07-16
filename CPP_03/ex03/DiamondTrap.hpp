#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private :
	std::string name;

public :
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string _name);
	DiamondTrap(DiamondTrap& c);
	DiamondTrap& operator=(const DiamondTrap& c);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	void whoAmI();
};

#endif
