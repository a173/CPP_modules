//
// Created by Allegra Caryn on 4/19/21.
//

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->_name << " (" << this->_type << ") " << "Потрачено" << std::endl;
}

Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
}

void 	Zombie::setName(std::string name) {
	this->_name = name;
}

void 	Zombie::setType(std::string type) {
	this->_type = type;
}

void	Zombie::announce() const{
	std::cout << this->_name << " (" << this->_type << ") " << "Жраааааать!!!1!!!!11!1!" << std::endl;
}