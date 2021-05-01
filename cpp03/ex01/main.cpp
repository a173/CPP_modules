#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::srand(time(NULL));
	std::string	nameScav[5] = {"Олег", "Димон", "Арсений", "Вася", "Зина"};
	std::string	nameFrag[5] = {"Мертвичина", "Киборг-убийца", "Иванов", "Рапунцель", "Паттинсон"};

	FragTrap mud1(nameFrag[std::rand() % 5]);
	FragTrap mud2(nameFrag[std::rand() % 5]);
	ScavTrap mud3(nameScav[std::rand() % 5]);

	mud2.takeDamage(mud1.rangedAttack(mud2.getName()));
	mud2.beRepaired(20);
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.meleeAttack(mud2.getName()));
	mud2.takeDamage(mud3.challengeNewcomer(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	return 0;
}
