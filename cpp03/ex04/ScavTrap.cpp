//
// Created by Allegra Caryn on 4/22/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap("SC4V-TP", name, 100, 100, 50, 50, 1, 20, 15, 3) {
	std::cout << _model << " " << _name << " рожден, чтобы охранять!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	if (_hit > 0)
		std::cout << _model << " " << _name << " устарел и переплавлен!" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & a) {
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

int		ScavTrap::rangedAttack(const std::string &target) {
	const int energy = 8;

	if (_energy > energy) {
		std::cout << _model << " " << _name << " совершает дальнюю атаку как Скавтрап на " << target << ", отнимая " << _ranged_attack << " HP!" << std::endl;
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
		std::cout << _model << " " << _name << " атакует " << target << " в ближнем бою как Скавтрап, отнимая " << _melee_attack << " HP!" << std::endl;
		_energy -= energy;
	} else {
		std::cout << _model << " " << _name << " слишком слаб для ближнего боя!" << std::endl;
		return 0;
	}
	return _melee_attack;
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
