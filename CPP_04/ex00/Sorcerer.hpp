#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

private :
	std::string name;
	std::string title;
	Sorcerer() {}

public :
	~Sorcerer();
	Sorcerer(const Sorcerer& c);
	Sorcerer& operator=(const Sorcerer& c);

	Sorcerer(std::string name, std::string title);
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &) const;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &s);

#endif
