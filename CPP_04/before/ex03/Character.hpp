#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

private:
	std::string _name;
	AMateria* _inventory[4];
	Character();

public:
	Character(std::string const & name);
	virtual ~Character();
	Character(const Character&);
	Character& operator=(const Character&);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

};

#endif
