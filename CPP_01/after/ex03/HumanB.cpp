#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::~HumanB() {}
