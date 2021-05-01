//
// Created by Allegra Caryn on 4/24/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
	int i = -1;

	_materia = new AMateria * [4];
	while(++i < 4)
		_materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & a) {
	*this = a;
}

MateriaSource::~MateriaSource() {
	my_del();
}

MateriaSource &MateriaSource::operator=(const MateriaSource & a) {
	int i = -1;
	if (this != &a) {
		if (_materia)
			my_del();
		_count = a._count;
		_materia = new AMateria * [4];
		while (++i < a._count)
			_materia[i] = a._materia[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria * a) {
	if (_count < 4) {
		_materia[_count] = a;
		_count++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	int i = -1;

	while (++i < _count && _materia[i])
		if (_materia[i]->getType().compare(type) == 0)
			return (_materia[i]->clone());
	return (0);
}

void MateriaSource::my_del() {
	int i = -1;

	while (++i < _count) {
		if (_materia[i] != 0)
			delete _materia[i];
		_materia[i] = 0;
	}
	delete [] _materia;
	_materia = 0;
}