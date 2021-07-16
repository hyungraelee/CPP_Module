#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout <<  this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& c) {
	*this = c;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& c) {
	this->name = c.name;
	this->title = c.title;
	return (*this);
}

std::string Sorcerer::getName() const {
	return (this->name);
}

std::string Sorcerer::getTitle() const {
	return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &s)
{
	out << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}

