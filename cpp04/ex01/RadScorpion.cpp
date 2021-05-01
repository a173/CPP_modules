//
// Created by Allegra Caryn on 4/23/21.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & a) : Enemy(a.getHP(), a.getType()) {}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &a) {
	Enemy::operator=(a);

	return *this;
}

void RadScorpion::takeDamage(int damage) {
	if (damage > 0)
		Enemy::takeDamage(damage);
}
