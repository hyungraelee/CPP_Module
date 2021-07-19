#include "Cure.hpp"

Cure::Cure(const Cure& orig) : AMateria(orig) {
}

Cure& Cure::operator=(const Cure& orig) {
	if (this != &orig) {
		AMateria::operator=(orig);
	}
	return *this;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

