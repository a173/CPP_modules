//
// Created by Allegra Caryn on 4/24/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice & a) : AMateria(a.getXP(), a.getType()) {}

Ice::~Ice() {}

Ice	& Ice::operator=(const Ice & a) {
	AMateria::operator=(a);

	return *this;
}

AMateria*	Ice::clone() const {
	AMateria*	buf = new Ice(*this);
	return (buf);
}

void 		Ice::use(ICharacter& target) {
	std::cout << "* Ice стреляет ледяными болами в " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}