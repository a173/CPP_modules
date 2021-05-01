//
// Created by Allegra Caryn on 4/20/21.
//

#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const {
	std::ostringstream	num;
	num << this;
	return (num.str());
}
