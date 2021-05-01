//
// Created by Allegra Caryn on 4/22/21.
//

#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	NinjaTrap &	operator=(NinjaTrap const & a);

	void 		ninjaShoebox(ClapTrap & target);

private:
	NinjaTrap();
	int 		randomAttack(ClapTrap & target);
	std::string arrayAttack(void) const;
};

#endif //EX03_NINJATRAP_HPP
