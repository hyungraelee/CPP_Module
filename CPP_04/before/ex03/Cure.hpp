#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public :
	Cure() : AMateria("cure") {}
	virtual ~Cure() {}
	Cure(const Cure& orig);
	Cure& operator=(const Cure&);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
