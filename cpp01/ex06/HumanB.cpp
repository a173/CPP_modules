//
// Created by Allegra Caryn on 4/20/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
}
