//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &);
		virtual ~RadScorpion();
		RadScorpion &	operator=(const RadScorpion & a);
		virtual void takeDamage(int);
};

#endif //EX01_RADSCORPION_HPP
