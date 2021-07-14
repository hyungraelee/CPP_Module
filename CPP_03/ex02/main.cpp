#include "FragTrap.hpp"

int main()
{
	FragTrap a("Hyunlee");
	FragTrap b;
	FragTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	c.highFivesGuys();
	return (0);
}
