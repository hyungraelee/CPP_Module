#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Hyunlee");
	ClapTrap b("Jaeskim");

	a.attack("Jaeskim");
	b.takeDamage(0);
	b.beRepaired(5);
	return (0);
}
