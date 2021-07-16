#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a("Hyunlee");
	DiamondTrap b;
	DiamondTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	c.guardGate();
	b.highFivesGuys();
	b.whoAmI();
}
