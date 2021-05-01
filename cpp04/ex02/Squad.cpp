//
// Created by Allegra Caryn on 4/23/21.
//

#include "Squad.hpp"

Squad::Squad() : _count(0), _marine(0) {}

Squad::Squad(const Squad & a) : _count(0) {
	*this = a;
}

Squad & Squad::operator=(const Squad & a) {
	int i = -1;
	if (this != &a) {
		if (_marine && _count > 0)
			my_del();
		_count = a._count;
		_marine = new ISpaceMarine * [_count];
		while (++i < a._count)
			_marine[i] = a._marine[i]->clone();
	}
	return *this;
}

Squad::~Squad() {
	if (_count > 0)
		my_del();
}

int Squad::getCount() const {
	return _count;
}

ISpaceMarine* Squad::getUnit(int id) const {
	return	(id < 0 || id > _count - 1) ? 0 : _marine[id];
}

int Squad::push(ISpaceMarine *a) {
	int i = -1;
	ISpaceMarine** buf = new ISpaceMarine * [_count + 1];

	while (++i < _count)
		buf[i] = _marine[i];
	buf[i] = a;
	_count++;
	delete [] _marine;
	_marine = buf;
	return (_count);
}

void Squad::my_del() {
	int i = -1;

	while (++i < _count) {
		delete _marine[i];
		_marine[i] = 0;
	}
	delete [] _marine;
	_marine = 0;
}
