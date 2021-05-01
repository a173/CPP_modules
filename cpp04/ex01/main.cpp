#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "Guns.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* g = new Guns();



	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
	me->equip(g);
	me->attack(b);
	std::cout << *me;



//	std::cout << "1111" << std::endl;
//	me->recoverAP();
//	std::cout << *me;
//	me->recoverAP();
//	std::cout << *me;
//	me->recoverAP();
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
	return 0;
}