//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &);
		~Sorcerer();
		Sorcerer &	operator=(Sorcerer const &);
		std::string announce() const;
		void 		polymorph(Victim const &) const;
	private:
		Sorcerer();
		std::string _name;
		std::string _title;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & a);

#endif //EX00_SORCERER_HPP
