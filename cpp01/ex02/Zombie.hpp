//
// Created by Allegra Caryn on 4/19/21.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP
#include <iostream>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name, std::string type);
		void 	setName(std::string name);
		void	setType(std::string type);
		void	announce() const;
};


#endif //EX02_ZOMBIE_HPP
