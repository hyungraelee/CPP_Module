#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	this->name = name;
	this->apCost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(const AWeapon& a) {
	*this = a;
}

AWeapon& AWeapon::operator=(const AWeapon& a) {
	this->name = a.getName();
	this->apCost = a.getAPCost();
	this->damage = a.getDamage();
	return (*this);
}

std::string const& AWeapon::getName() const {
	return (this->name);
}

int AWeapon::getAPCost() const {
	return (this->apCost);
}

int AWeapon::getDamage() const {
	return (this->damage);
}
