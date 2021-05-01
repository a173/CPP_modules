//
// Created by Allegra Caryn on 4/19/21.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->_zombie = new Zombie[n];
}

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_zombie;
}