#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

private:
	/* data */
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator( const AssaultTerminator&);
	AssaultTerminator& operator=( const AssaultTerminator& );

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
