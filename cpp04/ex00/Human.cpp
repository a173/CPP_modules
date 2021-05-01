//
// Created by Allegra Caryn on 4/23/21.
//

#include "Human.hpp"

Human::Human(std::string name) : Victim(name) {
	std::cout << "Я родился." << std::endl;
}

Human::Human(const Human & a) : Victim(a) {}

Human::~Human() {
	std::cout << "Мама, роди меня обратно..." << std::endl;
}

Human & Human::operator=(const Human &a) {
	Victim::operator=(a);
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Human const &rhs) {
	o << rhs.announce() << std::endl;
	return o;
}

void Human::getPolymorphed() const {
	std::cout << getName() << "  превращается в человека!" << std::endl;
}
