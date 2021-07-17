#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(const PowerFist& p) {
	*this = p;
}

PowerFist& PowerFist::operator=(const PowerFist& p) {
	this->AWeapon::operator=(p);
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
