//
// Created by Allegra Caryn on 4/24/21.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure & a) : AMateria(a.getXP(), a.getType()) {}

Cure::~Cure() {}

Cure	& Cure::operator=(const Cure & a) {
	AMateria::operator=(a);

	return *this;
}

AMateria*	Cure::clone() const {
	AMateria*	buf = new Cure(*this);
	return (buf);
}

void 		Cure::use(ICharacter& target) {
	std::cout << "* Cure лечит раны " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
