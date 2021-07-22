#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {

protected:
	int	hp;
	std::string type;
	Enemy() {}

public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(const Enemy& e);
	Enemy& operator=(const Enemy& e);

	std::string const& getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif
