#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {

public :
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant&);
	SuperMutant& operator=(const SuperMutant&);

	virtual void takeDamage(int);
};

#endif
