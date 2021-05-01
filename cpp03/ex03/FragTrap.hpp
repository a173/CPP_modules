//
// Created by Allegra Caryn on 4/21/21.
//

#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & a);

		int 		vaulthunter_dot_exe(std::string const & target);

	private:
		FragTrap();
		std::string arrayAttack(void) const;
		std::string arrayGuns(void) const;
};


#endif //EX03_FRAGTRAP_HPP
