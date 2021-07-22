#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& e) : Enemy(e) {
	*this = e;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& e) {
	if (this != &e) {
		Enemy::operator=(e);
	}
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	if (damage <= 3)
		damage = 0;
	else
		damage -= 3;
	Enemy::takeDamage(damage);
}
