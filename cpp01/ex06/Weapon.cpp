//
// Created by Allegra Caryn on 4/20/21.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string str) {
	this->_type = str;
}

const std::string &	Weapon::getType() {
	return (this->_type);
}

void Weapon::setType(std::string str) {
	this->_type = str;
}
