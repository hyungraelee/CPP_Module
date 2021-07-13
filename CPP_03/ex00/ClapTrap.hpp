#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private :
		std::string		name;
		unsigned int	hitPoints;		// HP
		unsigned int	energyPoints;	// MP
		unsigned int	attackDamage;	// AD
	public :
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap& c);
		ClapTrap& operator=(const ClapTrap& c);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
