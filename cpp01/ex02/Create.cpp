//
// Created by Allegra Caryn on 4/19/21.
//

#include "Create.hpp"

void Create::createToEvent() {
	ZombieEvent	mud;
	Zombie		*zombie;

	mud.setZombieEvent("Бот");
	zombie = mud.newZombie("Лилия");
	zombie->announce();
	delete zombie;
}

void Create::createToRandom() {
	std::string	name[5] = {"Олег", "Димон", "Арсений", "Вася", "Зина"};
	std::string	type[5] = {"Мертвичина", "Киборг-убийца", "Иванов", "Рапунцель", "Паттинсон"};
//	Zombie		zombie(name[std::rand() % 5], type[std::rand() % 5]);
	Zombie		zombie[5];
	int 		i = -1;

	while (++i < 5) {
		zombie[i].setName(name[std::rand() % 5]);
		zombie[i].setType(type[std::rand() % 5]);
		zombie[i].announce();
	}
}