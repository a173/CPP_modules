//
// Created by Allegra Caryn on 4/19/21.
//

#ifndef EX03_ZOMBIE_HPP
#define EX03_ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
	std::string _name;
	std::string _type;
public:
	Zombie();
	~Zombie();
	void	announce() const;
};


#endif //EX03_ZOMBIE_HPP
