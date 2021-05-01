//
// Created by Allegra Caryn on 4/22/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Ты не должен этого видеть" << std::endl;
}

ClapTrap::ClapTrap(std::string model, std::string name) : _model(model), _name(name), _lvl(1) {
	std::cout << "Создается CL4P-TP типа " << model << std::endl;
}

ClapTrap::ClapTrap(std::string model, std::string name, int hit, int max_hit, int energy, int max_energy, int lvl, int melee_attack, int ranged_attack, int armor) :
		_model(model), _name(name), _hit(hit), _max_hit(max_hit), _energy(energy), _max_energy(max_energy), _lvl(lvl), _melee_attack(melee_attack), _ranged_attack(ranged_attack), _armor(armor) {
	std::cout << "Создается CL4P-TP типа " << model << std::endl;
}

ClapTrap::~ClapTrap() {
	if (_hit > 0)
		std::cout << "CL4P-TP типа " << _model << " потрачено" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & a) {
	std::cout << "Невероятно, выпущена абсолютная копия " << a._model << " " << a._name << std::endl;
	_model = a._model;
	_name = a._name;
	_hit = a._hit;
	_max_hit = a._max_hit;
	_energy = a._energy;
	_max_energy = a._max_energy;
	_lvl = a._lvl;
	_melee_attack = a._melee_attack;
	_ranged_attack = a._ranged_attack;
	_armor = a._armor;
	return *this;
}

std::string ClapTrap::getName(void) const {
	return _name;
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	int buf;

	buf = ((int) amount - _armor) > 0 ? ((int) amount - _armor) : 0;
	if (amount > 0 && _hit)
		if (buf < _hit) {
			std::cout << _model << " " << _name << " получает урон " << buf << " HP!" << std::endl;
			_hit -= buf;
		} else {
			std::cout << _model << " " << _name << " уничтожен!" << std::endl;
			_hit = 0;
		}
	else if (amount > 0)
		std::cout << "Неизвестный пинает труп " << _model << " " << _name << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount) {
	int buf;

	buf = _hit + (int) amount;
	if (_max_hit == _hit)
		std::cout << _model << " " << _name << " не нуждается в ремонте!" << std::endl;
	else if (buf < _max_hit) {
		std::cout << _model << " " << _name << " отремонтирован и получает " << amount << " HP!" << std::endl;
		_hit = buf;
	} else {
		std::cout << _model << " " << _name << " обновлен!" << std::endl;
		_hit = _max_hit;
	}
}

