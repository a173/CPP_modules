//
// Created by Allegra Caryn on 4/24/21.
//

#include "Character.hpp"

Character::Character() {}

Character::Character(const Character & a) : _count_materia(5) {
	*this = a;
}

Character::Character(const std::string& name) : _name(name), _count_materia(0) {
	int i = -1;

	_materia = new AMateria * [4];
	while(++i < 4)
		_materia[i] = 0;
}

Character::~Character() {
	my_del();
}

Character &Character::operator=(const Character & a) {
	int i = -1;
	if (this != &a) {
		if (_materia && _count_materia != 5)
		_name = a._name;
		_count_materia = a._count_materia;
		_materia = new AMateria * [4];
		while (++i < 4)
			if (a._materia[i] != 0)
				_materia[i] = a._materia[i]->clone();
			else
				_materia[i] = 0;
	}
	return *this;
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	int i = -1;

	if (m != 0) {
		if (m->getFlag() == 1)
			std::cout << getName() << ", инвентарь уже кем-то занят!" << std::endl;
		else if (_count_materia < 4)
			while (++i < 4)
				if (_materia[i] == 0) {
					_materia[i] = m;
					_count_materia++;
					m->setFlag(1);
					break;
				}
	}
	else
		std::cout << "Похоже, произошла ошибка" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 4 && _materia[idx] != 0) {
		_materia[idx]->setFlag(0);
		_materia[idx] = 0;
		_count_materia--;
	}
	else
		std::cout << "Предмета под индексом " << idx << " нет в инвентаре" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && _count_materia > 0 && _materia[idx] != 0)
		_materia[idx]->use(target);
//	else
//		std::cout << "Действие невозможно!" << std::endl;
}

void Character::my_del() {
	int i = -1;

	while (++i < 4) {
		if (_materia[i] != 0)
			delete _materia[i];
		_materia[i] = 0;
	}
	delete [] _materia;
	_materia = 0;
}
