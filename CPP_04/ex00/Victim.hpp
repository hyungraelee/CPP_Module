#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

private:
	std::string name;
	Victim() {}

public:
	~Victim();
	Victim(const Victim& c);
	Victim& operator=(const Victim& c);

	Victim(std::string name);
	std::string getName() const;
	void setName(std::string name);
	virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream &out, const Victim &s);


#endif
