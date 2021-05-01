//
// Created by Allegra Caryn on 4/22/21.
//

#ifndef EX04_NINJATRAP_HPP
#define EX04_NINJATRAP_HPP
#include "ClapTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
	public:
		explicit NinjaTrap(std::string name);
		~NinjaTrap(void);

		NinjaTrap &	operator=(NinjaTrap const & a);

	virtual int 		rangedAttack(std::string const & target);

	virtual int 		meleeAttack(std::string const & target);
		void 		ninjaShoebox(ClapTrap & target);

	protected:
		NinjaTrap();
	private:
		int 		randomAttack(ClapTrap & target);
		std::string arrayAttack(void) const;
};

#endif //EX04_NINJATRAP_HPP
