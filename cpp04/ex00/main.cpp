#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Human.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Human pip("Лунтик");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(pip);
	return 0;
}
