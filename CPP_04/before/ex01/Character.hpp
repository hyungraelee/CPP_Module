#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

private:
	std::string name;
	int	ap;
	AWeapon* weapon;
	Character() {};

public:
	Character(std::string const & name);
	~Character();
	Character(Character const &);
	Character& operator=(Character const &);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const& getName() const;
	int getAP() const;
	AWeapon* getWeapon() const;
};

std::ostream& operator<<(std::ostream& os, Character const&);

#endif
