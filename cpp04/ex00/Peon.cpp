//
// Created by Allegra Caryn on 4/23/21.
//

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & a) : Victim(a) {}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(const Peon &a) {
	Victim::operator=(a);

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Peon const &rhs) {
	o << rhs.announce() << std::endl;
	return o;
}

void Peon::getPolymorphed() const {
	std::cout << getName() << "  has been turned into a pink pony!" << std::endl;
}
