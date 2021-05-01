#include "Create.hpp"

int main() {
	std::srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	std::cout << "***Create Random Zombie***" << std::endl;
	Create::createToRandom();
	std::cout << "***THE END***" << std::endl;
	return 0;
}