#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public :
	Ice() : AMateria("ice") {}
	virtual ~Ice() {}
	Ice(const Ice& orig);
	Ice& operator=(const Ice& orig);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
