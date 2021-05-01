//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
	public:
		Character(std::string const & name);
		Character(const Character &);
		~Character();
		Character & operator=(const Character & a);
		std::string		announce() const;
		void			recoverAP();
		void 			equip(AWeapon*);
		void			attack(Enemy*&);
		const std::string &	getName() const;
	private:
		Character();
		std::string _name;
		int 		_ap;
		AWeapon*	_weapon;

};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif //EX01_CHARACTER_HPP
