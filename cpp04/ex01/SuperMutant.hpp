//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &);
		virtual ~SuperMutant();
		SuperMutant &	operator=(const SuperMutant & a);
		virtual void takeDamage(int);
};

//std::ostream & operator<<(std::ostream & o, SuperMutant const & a);

#endif //EX01_SUPERMUTANT_HPP
