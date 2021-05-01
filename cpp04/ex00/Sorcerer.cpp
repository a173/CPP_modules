//
// Created by Allegra Caryn on 4/23/21.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & a) {
	*this = a;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(const Sorcerer & a) {
	_name = a._name;
	_title = a._title;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const &rhs) {
	o << rhs.announce() << std::endl;
	return o;
}

std::string		Sorcerer::announce() const {
	return ("I'm " + _name + ", " + _title + ", and I like ponies!");
}

void			Sorcerer::polymorph(const Victim & a) const {
	a.getPolymorphed();
}

