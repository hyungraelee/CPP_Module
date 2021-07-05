#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie *z1 = ZombieEvent::newZombie("hyunlee");
	ZombieEvent::setZombieType(z1, "cute");
	z1->announce();
	ZombieEvent::ramdomChump();
	delete z1;
	return (0);
}
