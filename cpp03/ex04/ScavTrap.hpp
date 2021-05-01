//
// Created by Allegra Caryn on 4/22/21.
//

#ifndef EX04_SCAVTRAP_HPP
#define EX04_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		explicit ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & a);
		int 		rangedAttack(std::string const & target);
		int 		meleeAttack(std::string const & target);
		int 		challengeNewcomer(std::string const & target);

	private:
		ScavTrap();
		std::string arrayAttack(void) const;
};


#endif //EX04_SCAVTRAP_HPP
