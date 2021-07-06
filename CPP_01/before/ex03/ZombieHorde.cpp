#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	zombies = new Zombie[n];
	for (int i = 0 ; i < n ; i++)
		zombies[i].announce();
}

ZombieHorde::~ZombieHorde() {
	delete [] zombies;
	std::cout << "all kill !!!" << std::endl;
}
