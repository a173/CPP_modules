//
// Created by Allegra Caryn on 4/21/21.
//

#ifndef EX04_FRAGTRAP_HPP
#define EX04_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		explicit FragTrap(std::string name);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & a);
		int 		rangedAttack(std::string const & target);
		int 		meleeAttack(std::string const & target);
		int 		vaulthunter_dot_exe(std::string const & target);

	protected:
		FragTrap();
	private:
		std::string arrayAttack(void) const;
		std::string arrayGuns(void) const;
};


#endif //EX04_FRAGTRAP_HPP
