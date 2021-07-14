#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap " << "default constructor." << std::endl;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap " << name << " constructor." << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " destructor." << std::endl;
}

FragTrap::FragTrap(FragTrap& c) {
	std::cout << "FragTrap " << "copy constructor." << std::endl;
	*this = c;
}

FragTrap& FragTrap::operator=(const FragTrap& c) {
	std::cout << "FragTrap " << "assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << getName() << " : ComeOn!!! ComeOn!!!! HighFive Guys~!" << std::endl;
}
