#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {

private :
	Peon() : Victim("no name") {}

public :
	~Peon();
	Peon(const Peon& c);
	Peon& operator=(const Peon& c);

	Peon(std::string name);
	virtual void getPolymorphed() const;
};

#endif
