//
// Created by Allegra Caryn on 4/19/21.
//

#include "Zombie.hpp"

Zombie::Zombie() {
	int i;

	i = -1;
	std::string	name[5] = {"Олег", "Димон", "Арсений", "Вася", "Зина"};
	std::string	type[5] = {"Мертвичина", "Киборг-убийца", "Иванов", "Рапунцель", "Паттинсон"};
	this->_name = name[std::rand() % 5];
	this->_type = type[std::rand() % 5];
	this->announce();
}

Zombie::~Zombie() {
	std::cout << this->_name << " (" << this->_type << ") " << "Потрачено" << std::endl;
}

void	Zombie::announce() const {
	std::cout << this->_name << " (" << this->_type << ") " << "Жраааааать!!!1!!!!11!1!" << std::endl;
}
