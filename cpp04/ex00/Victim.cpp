//
// Created by Allegra Caryn on 4/23/21.
//

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(const Victim & a) {
	*this = a;
}

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim & Victim::operator=(const Victim & a) {
	_name = a._name;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Victim const &rhs) {
	o << rhs.announce() << std::endl;
	return o;
}

std::string		Victim::announce() const {
	return ("I'm " + _name + " and I like otters!");
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

const std::string &Victim::getName() const {
	return _name;
}
