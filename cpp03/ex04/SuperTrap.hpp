//
// Created by Allegra Caryn on 4/22/21.
//

#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap();
		explicit SuperTrap(std::string name);
		~SuperTrap();

		SuperTrap &	operator=(SuperTrap const & a);

		int 		rangedAttack(std::string const & target);
		int 		meleeAttack(std::string const & target);

};


#endif //EX04_SUPERTRAP_HPP
