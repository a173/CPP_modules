#include <iostream>
#include "Base.hpp"
#include <stdexcept>

Base*	generate(void) {
	short n = std::rand() % 3;

	if (n == 0) {
		std::cout << "Создание объекта класса A" << std::endl;
		return new A;
	}
	if (n == 1) {
		std::cout << "Создание объекта класса B" << std::endl;
		return new B;
	}
	std::cout << "Создание объекта класса C" << std::endl;
	return new C;
}

void	identify_from_pointer(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << "Its class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Its class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Its class C" << std::endl;
}

void	identify_from_reference(Base &p) {
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "Its class A" << std::endl;
	}
	catch (...) {}
	try {
		B b = dynamic_cast<B &>(p);
		std::cout << "Its class B" << std::endl;
	}
	catch (...) {}
	try {
		C c = dynamic_cast<C &>(p);
		std::cout << "Its class C" << std::endl;
	}
	catch (...) {}
}

int main() {
	std::srand(time(NULL));
	const short n = 3;

	for (short i = 0; i < n; ++i) {
		Base *base = generate();
		identify_from_pointer(base);
		identify_from_reference(*base);
		std::cout << "----------------------------" << std::endl;
	}
	return 0;
}
