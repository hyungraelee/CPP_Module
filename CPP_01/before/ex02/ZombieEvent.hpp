#ifndef ZOMBIEEVENT_CPP
# define ZOMBIEEVENT_CPP

# include "Zombie.hpp"

class ZombieEvent {
	public :
		static void		setZombieType(Zombie *, std::string);
		static Zombie*	newZombie(std::string name);
		static void		ramdomChump();
};

#endif
