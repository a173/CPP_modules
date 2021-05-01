//
// Created by Allegra Caryn on 4/22/21.
//

#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string name);
	~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const & a);

	int 		challengeNewcomer(std::string const & target);

private:
	ScavTrap();
	std::string arrayAttack(void) const;
};


#endif //EX03_SCAVTRAP_HPP
