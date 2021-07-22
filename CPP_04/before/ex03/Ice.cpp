#include "Ice.hpp"

Ice::Ice(const Ice& orig) : AMateria(orig) {
}

Ice& Ice::operator=(const Ice& orig) {
	if (this == &orig)
		AMateria::operator=(orig);
	return *this;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
