//
// Created by Allegra Caryn on 4/20/21.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
	private:
		Weapon	&_weapon;
		std::string _name;
	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		void attack();
};


#endif //EX06_HUMANA_HPP
