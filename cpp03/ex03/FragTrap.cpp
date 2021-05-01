//
// Created by Allegra Caryn on 4/21/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap("FR4G-TP", name, 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << _model << " " << _name << " рожден и готов уничтожать!" << std::endl;
}

FragTrap::~FragTrap(void) {
	if (_hit > 0)
		std::cout << _model << " " << _name << " отправлен в утиль!" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & a) {
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

std::string FragTrap::arrayAttack(void) const {
	std::string str[5];
	str[0] = " оказывает сильное воздействие на ";
	str[1] = " направляет свои действия против ";
	str[2] = " извлекает хребет ";
	str[3] = " погружает в депрессию ";
	str[4] = " разбивает сердце ";
	return str[std::rand() % 5];
}

std::string FragTrap::arrayGuns(void) const {
	std::string str[5];
	str[0] = "сковороды";
	str[1] = "политической силы";
	str[2] = "безответной любви";
	str[3] = "наркозависимости";
	str[4] = "русских сериалов";
	return str[std::rand() % 5];
}

int	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	const int energy = 25;

	if (_energy < energy) {
		std::cout << _model << " " << _name << " слишком слаб для этого дерьма!" << std::endl;
		return 0;
	}
	else {
		std::cout << _model << " " << _name << arrayAttack() << target << " с помощью " << arrayGuns() << std::endl;
		_energy -= energy;
	}
	return (1 + (std::rand() % 5)) * 10;
}
