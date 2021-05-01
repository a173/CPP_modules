#include "Pony.hpp"

void ponyOnTheHeap() {
	Pony*	pony = new Pony("Brain", "Yellow");
	delete pony;
}

static int	ponyOnTheStack() {
	Pony	pony = Pony("Pinky", "Pink");
	return 0;
}

int	main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "***Стэк для слабаков***" << std::endl;
	ponyOnTheStack();
	std::cout << "***Куча для пацанов***" << std::endl;
	ponyOnTheHeap();
	std::cout << "***И вот ты здесь***" << std::endl;
	return 0;
}
