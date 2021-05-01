#include "Create.hpp"

int main() {
	std::srand(std::time(NULL));
	setlocale(LC_ALL, "Russian");
	std::cout << "***Create to allocate with ZombieEvent***" << std::endl;
	Create::createToEvent();

	std::cout << "***Create to stack with Zombie Class***" << std::endl;
	Create::createToRandom();
	return 0;
}
