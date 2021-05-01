//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_GUNS_HPP
#define EX01_GUNS_HPP
#include "AWeapon.hpp"

class Guns : public AWeapon {
		public:
		Guns();
		Guns(const Guns &);
			virtual ~Guns();
		Guns & operator=(const Guns & a);
		virtual void attack() const;
};

#endif //EX01_GUNS_HPP
