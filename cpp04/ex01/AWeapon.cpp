//
// Created by Allegra Caryn on 4/23/21.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(const std::string & name, int apcoast, int damage) : _name(name), _apcoast(apcoast), _damage(damage) {}

AWeapon::AWeapon(const AWeapon & a) { *this = a; }

AWeapon	& AWeapon::operator=(const AWeapon &a) {
	_name = a._name;
	_apcoast = a._apcoast;
	_damage = a._damage;

	return *this;
}

AWeapon::~AWeapon() {}

const std::string & AWeapon::getName() const { return _name; }

int 		AWeapon::getAPCost() const { return _apcoast; }

int 		AWeapon::getDamage() const { return _damage; }