//
// Created by Allegra Caryn on 4/19/21.
//

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieEvent(std::string type) {
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, this->_type));
}
