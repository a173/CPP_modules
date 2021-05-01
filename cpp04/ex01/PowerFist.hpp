//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		PowerFist(const PowerFist &);
		virtual ~PowerFist();
		PowerFist & operator=(const PowerFist & a);
		virtual void attack() const;
};

#endif //EX01_POWERFIST_HPP
