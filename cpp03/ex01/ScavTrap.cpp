//
// Created by Allegra Caryn on 4/22/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : _model("SC4V-TP"), _name(name), _hit(100), _max_hit(100), _energy(50), _max_energy(50), _lvl(1), \
						_melee_attack(20), _ranged_attack(15), _armor(3) {
	std::cout << _model << " " << _name << " рожден, чтобы охранять!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	if (_hit > 0)
		std::cout << _model << " " << _name << " устарел и переплавлен!" << std::endl;
}

std::string ScavTrap::getName(void) const {
	return _name;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & a) {
	std::cout << "Невероятно, выпущена абсолютная копия " << a._model << " " << a._name << std::endl;
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

int		ScavTrap::rangedAttack(const std::string &target) {
	const int energy = 8;

	if (_energy > energy) {
		std::cout << _model << " " << _name << " совершает дальнюю атаку на " << target << ", отнимая " << _ranged_attack << " HP!" << std::endl;
		_energy -= energy;
	} else {
		std::cout << _model << " " << _name << " слишком слаб для дальней атаки!" << std::endl;
		return 0;
	}
	return _ranged_attack;
}

int 	ScavTrap::meleeAttack(const std::string &target) {
	const int energy = 15;

	if (_energy > energy) {
		std::cout << _model << " " << _name << " атакует " << target << " в ближнем бою, отнимая " << _melee_attack << " HP!" << std::endl;
		_energy -= energy;
	} else {
		std::cout << _model << " " << _name << " слишком слаб для ближнего боя!" << std::endl;
		return 0;
	}
	return _melee_attack;
}

void 	ScavTrap::takeDamage(unsigned int amount) {
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

void 	ScavTrap::beRepaired(unsigned int amount) {
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

std::string ScavTrap::arrayAttack(void) const {
	std::string str[5];
	str[0] = " сообщает, что здесь съемка запрещена ";
	str[1] = " сообщает, что без маски вход воспрещен ";
	str[2] = " требует пропуск у ";
	str[3] = " просит пройти в комнату охраны для осмотра ";
	str[4] = " выстреливает в колено ";
	return str[std::rand() % 5];
}

int	ScavTrap::challengeNewcomer(std::string const & target) {
	const int energy = 5;

	if (_energy < energy) {
		std::cout << _model << " " << _name << " слишком слаб, чтобы охранять!" << std::endl;
		return 0;
	}
	else {
		std::cout << _model << " " << _name << arrayAttack() << target << "!" << std::endl;
		_energy -= energy;
	}
	return (1 + std::rand() % 5);
}
