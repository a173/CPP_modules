//
// Created by Allegra Caryn on 4/24/21.
//

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &a) { *this = a; }

AMateria::AMateria(const std::string &type) : _xp(0), _type(type), _flag(0) {}

AMateria::AMateria(unsigned int xp, const std::string &type) : _xp(xp), _type(type), _flag(0) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria & a) {
	_xp = a._xp;
	_type = a._type;

	return *this;
}

std::string const &AMateria::getType() const {
	return _type;
}

unsigned int AMateria::getXP() const {
	return _xp;
}

int AMateria::getFlag() const {
	return _flag;
}

void AMateria::setFlag(int n) {
	_flag = n;
}

void AMateria::use(ICharacter &) {
	_xp += 10;
}
