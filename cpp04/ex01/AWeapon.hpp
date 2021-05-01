//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP
#include <iostream>

class AWeapon {
	public:
		AWeapon(std::string const & name, int apcoast, int damage);
		AWeapon(const AWeapon &a);
		AWeapon & operator=(const AWeapon &a);
		virtual ~AWeapon();
		const std::string &	getName() const;
		int 				getAPCost() const;
		int 				getDamage() const;
		virtual void		attack() const = 0;

	private:
		AWeapon();
		std::string _name;
		int 		_apcoast;
		int 		_damage;
};

#endif //EX01_AWEAPON_HPP
