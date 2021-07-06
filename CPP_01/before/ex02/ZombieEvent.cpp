#include "ZombieEvent.hpp"
#include <random>

void	ZombieEvent::setZombieType(Zombie* zombie, std::string type){
	zombie->setType(type);
}

Zombie*	ZombieEvent::newZombie(std::string name){
	Zombie *newZ;

	newZ = new Zombie();
	newZ->setName(name);
	return (newZ);
}

std::string	makeRandName(void) {
	std::string	namePool[10] = {"hyunlee", "jiholee", "hkwon", "jaeskim", "spark", "skim", "yjung", "jolim", "kilee", "polorbear"};

	return (namePool[rand() % 10]);
}

void	ZombieEvent::ramdomChump(void) {
	Zombie	*randZ;

	randZ = newZombie(makeRandName());
	setZombieType(randZ, "polite");
	randZ->announce();
	delete randZ;
}
