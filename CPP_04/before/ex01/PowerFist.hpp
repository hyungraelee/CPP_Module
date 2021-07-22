#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public :
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist& p);
	PowerFist& operator=(const PowerFist& p);

	void attack() const;
};

#endif
