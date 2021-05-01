//
// Created by Allegra Caryn on 4/22/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {}

NinjaTrap::NinjaTrap(std::string name)  : ClapTrap("NJ4-TP", name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << _model << " " << _name << " кийааааа!" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
	if (_hit > 0)
		std::cout << _model << " " << _name << " самоуничтожился!" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & a) {
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

std::string NinjaTrap::arrayAttack(void) const {
	std::string str[5];
	str[0] = " применяет прием Кошачий глаз ";
	str[1] = " применяет прием Саото хикиганэ ";
	str[2] = " применяет прием Неко-Тэ ";
	str[3] = " применяет прием Яичная скорлупа ";
	str[4] = " применяет прием Донохи ";
	return str[std::rand() % 5];
}

int 		NinjaTrap::randomAttack(ClapTrap & target) {
	const int count = 5;
	const int energy = 55;

	if (_energy < energy) {
		std::cout << _model << " " << _name << " слишком слаб!" << std::endl;
		return 0;
	}
	else {
		int i = -1;
		while (++i < count)
			std::cout << _model << " " << _name << arrayAttack() << "против " << target.getName() << std::endl;
		_energy -= energy;
	}
	return (std::rand() % 10) + 40;
}

void 		NinjaTrap::ninjaShoebox(ClapTrap & target) {
	target.takeDamage(randomAttack(target));
}
