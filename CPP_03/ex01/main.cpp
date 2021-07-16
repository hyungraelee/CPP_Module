#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Hyunlee");
	ScavTrap b;
	ClapTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	b.guardGate();
	return (0);
}
