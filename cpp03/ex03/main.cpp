#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	std::srand(time(NULL));
	std::string	nameScav[5] = {"Кузьмич", "Димон", "Арсений", "Вася", "Зина"};
	std::string	nameFrag[5] = {"Мертвичина", "Киборг-убийца", "Иванов", "Рапунцель", "Паттинсон"};
	std::string	nameNinja[5] = {"Като Дандзо", "Исикава Гоэмон", "Хаттори Хандзо", "Санада Юкимура", "Фума Котаро"};

	FragTrap mud1(nameFrag[std::rand() % 5]);
	NinjaTrap mud2(nameNinja[std::rand() % 5]);
	ScavTrap mud3(nameScav[std::rand() % 5]);
	mud2.ninjaShoebox(mud1);
	mud2.ninjaShoebox(mud3);
	return 0;
}
