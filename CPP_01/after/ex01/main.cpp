#include "Zombie.hpp"

int	main()
{
	Zombie*	zombies;
	int		num = 5;

	zombies = zombieHorde(num, "hyunlee");
	for (int i = 0; i < num ; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
