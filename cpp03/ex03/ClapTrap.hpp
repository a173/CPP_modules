//
// Created by Allegra Caryn on 4/22/21.
//

#ifndef EX03_CLAPTRAP_HPP
#define EX03_CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string model, std::string name, int hit, int max_hit, int energy, int max_energy, int lvl, int melee_attack, int ranged_attack, int armor);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & a);

		std::string getName(void) const;
		int 		rangedAttack(std::string const & target);
		int 		meleeAttack(std::string const & target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
	protected:
		ClapTrap();
		std::string _model;
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


#endif //EX03_CLAPTRAP_HPP
