//
// Created by Allegra Caryn on 4/21/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {}

FragTrap::FragTrap(std::string name) : _model("FR4G-TP"), _name(name), _hit(100), _max_hit(100), _energy(100), _max_energy(100), _lvl(1), \
						_melee_attack(30), _ranged_attack(20), _armor(5) {
	std::cout << _model << " " << _name << " рожден и готов уничтожать!" << std::endl;
}

FragTrap::~FragTrap(void) {
	if (_hit > 0)
		std::cout << _model << " " << _name << " отправлен в утиль!" << std::endl;
}

std::string FragTrap::getName(void) const {
	return _name;
}

FragTrap &	FragTrap::operator=(FragTrap const & a) {
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

int		FragTrap::rangedAttack(const std::string &target) {
	const int energy = 10;

	if (_energy > energy) {
		std::cout << _model << " " << _name << " совершает дальнюю атаку на " << target << ", отнимая " << _ranged_attack << " HP!" << std::endl;
		_energy -= energy;
	} else {
		std::cout << _model << " " << _name << " слишком слаб для дальней атаки!" << std::endl;
		return 0;
	}
	return _ranged_attack;
}

int 	FragTrap::meleeAttack(const std::string &target) {
	const int energy = 20;

	if (_energy > energy) {
		std::cout << _model << " " << _name << " атакует " << target << " в ближнем бою, отнимая " << _melee_attack << " HP!" << std::endl;
		_energy -= energy;
	} else {
		std::cout << _model << " " << _name << " слишком слаб для ближнего боя!" << std::endl;
		return 0;
	}
	return _melee_attack;
}

void 	FragTrap::takeDamage(unsigned int amount) {
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

void 	FragTrap::beRepaired(unsigned int amount) {
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
