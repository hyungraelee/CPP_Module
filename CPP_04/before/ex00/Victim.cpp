#include "Victim.hpp"

Victim::Victim(std::string name) {
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& c) {
	*this = c;
}

Victim& Victim::operator=(const Victim& c) {
	this->name = c.name;
	return (*this);
}

std::string Victim::getName() const {
	return (this->name);
}

void Victim::setName(std::string name) {
	this->name = name;
}

void Victim::getPolymorphed() const {
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Victim &s) {
	out << "I'm " << s.getName() << "  and I like otters!" << std::endl;
	return (out);
}
