//
// Created by Allegra Caryn on 4/20/21.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon	*_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
};


#endif //EX06_HUMANB_HPP
