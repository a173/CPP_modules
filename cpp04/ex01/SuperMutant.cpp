//
// Created by Allegra Caryn on 4/23/21.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & a) : Enemy(a.getHP(), a.getType()) {}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage) {
	const int armor = 3;

	damage += armor;
	if (damage > 0)
		Enemy::takeDamage(damage);
}

SuperMutant &	SuperMutant::operator=(const SuperMutant & a) {
	Enemy::operator=(a);

	return *this;
}

//std::ostream & operator<<(std::ostream & o, SuperMutant const & a) {
//
//}