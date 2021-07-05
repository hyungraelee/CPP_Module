#include "Zombie.hpp"

std::string	makeRandName(void) {
	std::string	namePool[10] = {"hyunlee", "jiholee", "hkwon", "jaeskim", "spark", "skim", "yjung", "jolim", "kilee", "polorbear"};

	return (namePool[rand() % 10]);
}

Zombie::Zombie() {
	setName(makeRandName());
	setType("cute");
}

Zombie::~Zombie() {
	std::cout << this->name << " dead...." << std::endl;
}

void	Zombie::setType(std::string type) {
	this->type = type;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout << '<' << name << " (" << type << ")>" << ' ' << "Braiiiiiiinnnssss..." << std::endl;
}
