#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie;

	zombie = newZombie("hyunlee");
	zombie->announce();
	randomChump("jaeskim");
	delete zombie;
	return (0);
}
