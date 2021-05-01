//
// Created by Allegra Caryn on 4/23/21.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist & a) : AWeapon(a.getName(), a.getAPCost(), a.getDamage()) {}

PowerFist::~PowerFist() {}

PowerFist &	PowerFist::operator=(const PowerFist & a) {
	AWeapon::operator=(a);
	return *this;
}

void		PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
