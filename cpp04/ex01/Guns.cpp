//
// Created by Allegra Caryn on 4/23/21.
//

#include "Guns.hpp"

Guns::Guns() : AWeapon("Guns", 5, 20) {}

Guns::Guns(const Guns & a) : AWeapon(a.getName(), a.getAPCost(), a.getDamage()) {}

Guns::~Guns() {}

Guns &	Guns::operator=(const Guns & a) {
	AWeapon::operator=(a);
	return *this;
}

void		Guns::attack() const {
	std::cout << "* Пушка стреляет. Пау-Пау! *" << std::endl;
}
