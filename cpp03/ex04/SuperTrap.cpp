//
// Created by Allegra Caryn on 4/22/21.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap() {}

SuperTrap::SuperTrap(std::string name) : ClapTrap("Super-TP", name), FragTrap(), NinjaTrap() {
	std::cout << _model << " " << _name << " рожден, чтобы убивать!" << std::endl;
}

SuperTrap::~SuperTrap() {
	if (_hit > 0)
		std::cout << _model << " " << _name << ": \"I'll be back!\"" << std::endl;
}

SuperTrap &	SuperTrap::operator=(SuperTrap const & a) {
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

int SuperTrap::rangedAttack(const std::string &target) {
	return (FragTrap::rangedAttack(target));
}

int SuperTrap::meleeAttack(const std::string &target) {
	return (NinjaTrap::meleeAttack(target));
}

