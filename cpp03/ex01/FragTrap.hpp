//
// Created by Allegra Caryn on 4/21/21.
//

#ifndef EX01_FRAGTRAP_HPP
#define EX01_FRAGTRAP_HPP
#include <iostream>

class FragTrap {
	public:
		FragTrap(std::string name);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & a);

		std::string getName(void) const;
		int 		rangedAttack(std::string const & target);
		int 		meleeAttack(std::string const & target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
		int 		vaulthunter_dot_exe(std::string const & target);

	private:
		FragTrap();
		std::string _model;
		std::string arrayAttack(void) const;
		std::string arrayGuns(void) const;
		std::string _name;
		int			_hit;
		int			_max_hit;
		int 		_energy;
		int 		_max_energy;
		int 		_lvl;
		int 		_melee_attack;
		int 		_ranged_attack;
		int 		_armor;
};


#endif //EX01_FRAGTRAP_HPP
