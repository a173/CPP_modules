//
// Created by Allegra Caryn on 4/19/21.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string _type;
	public:
		void setZombieEvent(std::string type);
		Zombie*	newZombie(std::string name);
};


#endif //EX02_ZOMBIEEVENT_HPP
