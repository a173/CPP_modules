//
// Created by Allegra Caryn on 4/23/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & a) : AWeapon(a.getName(), a.getAPCost(), a.getDamage()) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle	& PlasmaRifle::operator=(const PlasmaRifle & a) {
	AWeapon::operator=(a);

	return *this;
}

void		PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}