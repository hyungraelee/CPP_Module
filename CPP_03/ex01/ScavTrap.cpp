#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap " << "default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap " << name << " constructor." << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " destructor." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& c) {
	std::cout << "ScavTrap " << "copy constructor." << std::endl;
	*this = c;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c) {
	std::cout << "ScavTrap " << "assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	return (*this);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode." << std::endl;
}
