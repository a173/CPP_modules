//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &);
		virtual ~PlasmaRifle();
		PlasmaRifle & operator=(const PlasmaRifle & a);
		virtual void attack() const;
};

#endif //EX01_PLASMARIFLE_HPP
