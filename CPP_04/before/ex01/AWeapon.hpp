#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {

protected:
	std::string name;
	int apCost;
	int damage;
	AWeapon() {}

public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(const AWeapon& a);
	AWeapon& operator=(const AWeapon& a);
	
	std::string const& getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif
