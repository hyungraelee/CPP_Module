#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	srand(time(NULL));
	Zombie *z1 = ZombieEvent::newZombie("hyunlee");
	ZombieEvent::setZombieType(z1, "cute");
	z1->announce();
	for (int i = 0; i < 10 ; i++)
		ZombieEvent::ramdomChump();
	delete z1;
	return (0);
}
