//
// Created by Allegra Caryn on 4/20/21.
//

#include "Human.hpp"

std::string		Human::identify(void) const {
	return (brain.identify());
}

const Brain		&Human::getBrain(void) const{
	return (brain);
}