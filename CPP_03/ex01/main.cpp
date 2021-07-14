#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Hyunlee");
	ScavTrap b;
	ScavTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	c.guardGate();
	return (0);
}
