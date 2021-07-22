#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& c) : Victim(c.getName()) {
	*this = c;
}

void Peon::getPolymorphed() const {
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon& Peon::operator=(const Peon& c) {
	setName(c.getName());
	return (*this);
}
