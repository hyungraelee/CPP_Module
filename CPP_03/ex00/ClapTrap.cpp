#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "BeepBeep,, Hello My name is " << name << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " : I'll.....b...e.........B..ack...!!!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& c) {
	*this = c;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage= c.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << name << " : Shxxxxt!!! My afo :(" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << name << " : Heart bbongbbong!!! Repaired complete!" << std::endl;
}
