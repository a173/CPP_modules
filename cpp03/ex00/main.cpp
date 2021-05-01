#include "FragTrap.hpp"

int main() {
	std::srand(time(NULL));
	std::string	name[5] = {"Мертвичина", "Киборг-убийца", "Иванов", "Рапунцель", "Паттинсон"};
	FragTrap mud1(name[std::rand() % 5]);
	FragTrap mud2(name[std::rand() % 5]);

	mud2.takeDamage(mud1.rangedAttack(mud2.getName()));
	mud2.beRepaired(20);
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.meleeAttack(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	mud2.takeDamage(mud1.vaulthunter_dot_exe(mud2.getName()));
	return 0;
}
