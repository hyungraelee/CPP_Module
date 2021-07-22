#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) {
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy () {

}

Enemy::Enemy(const Enemy& e) {
	*this = e;
}

Enemy& Enemy::operator=(const Enemy& e) {
	this->hp = e.getHP();
	this->type = e.getType();
	return (*this);
}

std::string const& Enemy::getType() const {
	return (this->type);
}

int Enemy::getHP() const {
	return (this->hp);
}

void Enemy::takeDamage(int _damage) {
	if (this->hp >= _damage)
		this->hp -= _damage;
	else
		this->hp = 0;
}
