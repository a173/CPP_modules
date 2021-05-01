//
// Created by Allegra Caryn on 4/23/21.
//

#include "Character.hpp"

Character::Character() {}

Character::Character(const Character & a) {
	*this = a;
}

Character::Character(const std::string &name) : _name(name), _ap(40), _weapon(0) { }

Character::~Character() {}

Character &	Character::operator=(const Character &a) {
	_name = a._name;
	_ap = a._ap;

	return *this;
}

std::string	Character::announce() const {
	if (_weapon == 0)
		return (_name + " has " + std::to_string(_ap) + " AP and is unarmed");
	return (_name + " has " + std::to_string(_ap) + " AP and wields a " + _weapon->getName());
}

void Character::recoverAP() {
	const int	_max_ap = 40;
	const int 	_recovery = 10;

	if (_ap < _max_ap)
		_ap = (_ap + _recovery) > _max_ap ? _max_ap : (_ap + _recovery);
}

void Character::attack(Enemy*& a) {
	if (a && _weapon && _ap >= _weapon->getAPCost()) {
		std::cout << _name << " attacks " << a->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		a->takeDamage(_weapon->getDamage());
		_ap -=_weapon->getAPCost();
		if (a->getHP() == 0) {
			delete a;
			a = 0;
		}
	}
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

const std::string &Character::getName() const {
	return _name;
}

std::ostream & operator<<(std::ostream & o, Character const &rhs) {
	o << rhs.announce() << std::endl;
	return o;
}
