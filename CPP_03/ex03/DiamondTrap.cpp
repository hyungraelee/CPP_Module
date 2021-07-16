#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap " << "default constructor." << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " destructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) {
	std::cout << "DiamondTrap " << _name << " constructor." << std::endl;
	this->name = _name;
	ClapTrap::name = _name.append("_clap_name");
	this->FragTrap::setHitPoints(100);
	this->ScavTrap::setEnergyPoints(50);
	this->FragTrap::setAttackDamage(30);
}

DiamondTrap::DiamondTrap(DiamondTrap& c) {
	std::cout << "DiamondTrap copy constructor." << std::endl;
	*this = c;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& c) {
	std::cout << "DiamondTrap assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	this->name = c.name;
	return (*this);
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "DiamondTrap " << this->name << " took " << amount << " damages." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "DiamondTrap " << this->name << " is repaired " << amount << ". Repaired complete!" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name : " << this->name << ". ClapTrap Name : " << ClapTrap::getName() << "." << std::endl;
}
