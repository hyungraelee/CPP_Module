#include "Zombie.hpp"

Zombie::Zombie() {
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
