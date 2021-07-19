#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

private:

public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(const TacticalMarine&);
	TacticalMarine& operator=(const TacticalMarine&);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
