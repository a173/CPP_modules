//
// Created by Allegra Caryn on 4/23/21.
//

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(const Enemy & a) {
	*this = a;
}

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type) {}

Enemy::~Enemy() {
//	std::cout << _type << " is died" << std::endl;
}

const std::string	& Enemy::getType() const {
	return _type;
}

int 		Enemy::getHP() const {
	return _hp;
}

void		Enemy::takeDamage(int damage) {
	_hp = (_hp - damage) < 0 ? 0 : (_hp - damage);
}

Enemy & Enemy::operator=(const Enemy &a) {
	_hp = a._hp;
	_type = a._type;

	return *this;
}

