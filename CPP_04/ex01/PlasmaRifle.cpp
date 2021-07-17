#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle() {

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& p) {
	*this = p;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& p) {
	this->AWeapon::operator=(p);
	return (*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
