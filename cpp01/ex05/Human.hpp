//
// Created by Allegra Caryn on 4/20/21.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
	Brain brain;
public:
	std::string		identify(void) const;
	const Brain&	getBrain(void) const;
};


#endif //EX05_HUMAN_HPP
