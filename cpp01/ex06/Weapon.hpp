//
// Created by Allegra Caryn on 4/20/21.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP
#include "iostream"

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string str);
		const std::string & getType();
		void setType(std::string str);
};


#endif //EX06_WEAPON_HPP
